#include<iostream.h>
#include<conio.h>
#include<string.h>

 class student
 {
  private:
  int rollno;
  char name[20];
  class address
  {
    private:
    int houseno;
    char street[20];
    char city[20];
    char state[20];
    char pincode[7];
    public:
    void setaddress(int h,char *s,char *c,char *st,char *p)
    {
      houseno=h;
      strcpy(street,s);
      strcpy(city,c);
      strcpy(state,st);
      strcpy(pincode,p);
      }
    void showaddress()
    {
     cout<<"\n";
     cout<<houseno<<" ";
     cout<<street<<" "<<city;
     cout<<"  "<<pincode;
     cout<<"   "<<state;
     }
	  };
    address add;
    public:
    void setrollno(int r)
    {
     rollno=r;
     }
    void setname(char *n)
    {
      strcpy(name,n);
      }
    void setaddress(int h,char *s,char *c,char *st,char *p)
    {
      add.setaddress(h,s,c,st,p);
      }
    void showstudent()
    {
     cout<<"student data"<<endl;
     cout<<rollno<<"  ";
     cout<<name<<"  ";
     add.showaddress();
     }
	};
     int main()
     {
      clrscr();
      student s1;
      s1.setrollno(134);
      s1.setname("Yash");
      s1.setaddress(13,"Amidhara society","amdavad","382345","gujarat");
      s1.showstudent();
      getch();
      }

