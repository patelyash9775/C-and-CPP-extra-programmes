#include<iostream>
#include<map>

using namespace std;

  int main()
  {
  	 map<int,string>c={
	                     {100,"jay"},
	                     {123,"meet"},
	                     {134,"yash"},
	                     {122,"sonu"},
	                  };
	 map<int,string>::iterator p=c.begin();
	 while(p!=c.end()) 
	 {
	 	 cout<<p->first<<"  "<<p->second<<endl;
	 	 p++;
					 }                
     cout<<c.at(134);
	 cout<<endl<<c.size();
	 cout<<endl<<c.empty();
	 cout<<endl;
	 c.insert(pair<int,string>(105,"push"))	;
	  map<int,string>::iterator q=c.begin();
	 while(q!=c.end()) 
	 {
	 	 cout<<q->first<<"  "<<q->second<<endl;
	 	 q++;
					 }  
	 					 
  }
