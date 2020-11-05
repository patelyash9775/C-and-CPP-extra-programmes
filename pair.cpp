#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
 using namespace std;
  
 class student
 {
 	string name;
 	int age;
 	public:
 		void setstudent(string a,int b)
        {
        	 name=a;
        	 age=b;
		}
		void showstudent()
		{
			cout<<"\nname "<<name;
			cout<<"age "<<age;
		}
  } ;
 int main()
 {   student s1;
 	 pair<string,int>p1;
 	 pair<int,int>p2;
 	 pair<string,float>p3;
 	 pair<int,student>p4;
 	 p1=make_pair("Yash",18);
 	 p2=make_pair(134,105);
 	 p3=make_pair("dring c++",340.5);
 	 p4=make_pair(1,s1);
 	 cout<<"\n pair1";
 	 cout<<"\n"<<p1.first<<" "<<p1.second;
 	 cout<<"\n";
 	 cout<<" pair2";
 	 cout<<"\n"<<p2.first<<" "<<p2.second;
 	 cout<<" pair3";
 	 cout<<"\n"<<p3.first<<" "<<p3.second;
     cout<<"\n"<<p4.first<<" ";
	 student s2=p4.second;
	 s2.showstudent();
	  
 }
