#include<iostream>
#include<list>

using namespace std;

 int main()
 {
 	 list<int>l1={11,22,33};
 	 list<int>l2={55,22,33,11,44,66,88,77,99};
 	 list<int>::iterator p=l1.begin();
 	 while(p!=l1.end())
     {
     	 cout<<*p<<" ";
     	 p++;
     }
     	 l1.pop_front();
     	 l1.pop_back();
	    cout<<endl;
	    list<int>::iterator q=l1.begin();
	    while(q!=l1.end())
	    {
	    	 cout<<*q<<" ";
	    	 q++;
		}
    list<int>::iterator r=l2.begin();
	while(r!=l2.end())
     {
     	 cout<<*r<<" ";
     	 r++;
     }
     l2.sort();
     cout<<endl;
	list<int>::iterator s=l2.begin();
	while(s!=l2.end())
     {
     	 cout<<*s<<" ";
     	 s++;
     }
     l2.reverse();
     cout<<endl;
	list<int>::iterator t=l2.begin();
	while(t!=l2.end())
     {
     	 cout<<*t<<" ";
     	 t++;
     }
     
 }
 
