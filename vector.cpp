#include<iostream>
#include<bits/stdc++.h>


 using namespace std;
 
 main()
 {
 	 vector<int>v1={10,20,30,40,50};
 	 for(int i=0;i<=4;i++)
 	 {
	  cout<<v1[i]<<endl;
      }
     vector<int>v2;
     vector<int>v3;
	 v2.push_back(10);
	 cout<<v2.capacity();
	 v2.push_back(20); 
     cout<<endl<<v2.capacity();
	 v2.push_back(30);
	  cout<<endl<<v2.capacity(); 
	   for(int i=0;i<=9;i++)
	    {
		 v3.push_back(10*(i+1));
	}
	cout<<v3.capacity();
	v3.pop_back();
	cout<<endl<<v3.capacity();
 }
