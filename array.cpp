#include<iostream>
#include<bits/stdc++.h>
#include<array>

 using namespace std;
 
 int main()
 {
 	 array<int,5>data_array={11,22,33,44,55};
 	 cout<<data_array.at(2);
 	 cout<<"\n"<<data_array.front();
 	 cout<<"\n"<<data_array.back();
 	 data_array.fill(10);
 	 for(int i=0;i<6;i++)
 	 {
 	  cout<<endl;s 	 
	  cout<<data_array[i];
     }
 	 return 0;
 }
