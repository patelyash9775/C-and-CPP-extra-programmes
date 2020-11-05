#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
	 string s1;
	 s1.assign("hello");
	 cout<<s1;
	 s1.append(" students");
	 cout<<endl<<s1;
	 s1.insert(2,"123");
	 cout<<endl<<s1;
	 string s2="Hello";
	 s2.replace(2,2,"A");
	 cout<<endl<<s2;
	 s2.erase();
	 cout<<endl<<s2;
	 string s3="hello onlines students";
	 int i=s3.find("onlines");
	 cout<<endl<<i;
	 int j=s3.find("yash");
	 cout<<endl<<j;
	 string s4="hello online online students";
	 int k=s4.find("online");
	 cout<<endl<<k;
	 int l=s4.rfind("online");
	 cout<<endl<<l;
	 string s5="Amar";
	 string s6="Amat";
	 int a=s5.compare(s6);
	 cout<<endl<<a;
	 int b=s5.size();
	 cout<<endl<<b;
	 
	  
}
