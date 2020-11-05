#include<iostream>
#include<list>
using namespace std;
  int main()
  {
  	 list<int>l1={11,22,33};
  	 list<string>l2={"India","Austrelia","USA","Uk"};
  	 l1.push_back(44);
  	 l1.push_front(10);
  	 list<int>::iterator p=l1.begin();
  	  while(p!=l1.end())
  	 {
  	 	 cout<<*p<<" ";
			p++; 
	   }
	 cout<<"total values in the list value"<<l1.size();
	   
  }
