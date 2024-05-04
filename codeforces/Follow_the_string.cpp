#include <iostream>
#include <vector>
#include <string>
#include<map>
using namespace std;


int main() {
map<char,int>mymap;
 int n;
 int t;
 int a;
 string s="abcdefghijklmnopqrstuvwxyz";
 
 
 
 cin>>t;
 for(int i=0;i<t;i++)
 {
for(int y=0;y<s.size();y++)
 {
 mymap[s[y]]=0;
 }
 cin>>n;
 for(int j=0;j<n;j++)
 {
 cin>>a;
 for(auto it: mymap)
 {
 if(it.second==a)
 {
 cout<<it.first;
 mymap[it.first]=mymap[it.first]+1;
 break;
 }
 }
 
 
 }
 cout<<""<<endl;
 mymap.clear();
 
 }
  }; 
