#include<iostream>
#include<bits/stdc++.h>

 using namespace std;
 
 int main()
 {
 	 tuple<string,int,int>t1;
 	 t1=make_tuple("India",16,10);
 	 cout<<get<0>(t1)<<" "; 
     cout<<get<1>(t1)<<" ";
     cout<<get<2>(t1)<<" ";
 }
 
 
