// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
 int n;
 int res;
 int t;
 string s;
 int start;
 int end;
 cin>>t;
 for(int i=0;i<t;i++)
 {
 cin>>n;
 cin>>s;
 for(int j=0;j<n;j++)
 {
 if(s[j]=='B')
 {
 start=j;
 break;
 }
 }
 for(int k=0;k<n;k++)
 {
 if(s[k]=='B')
 {
 end=k;
 }
 }
 res=end-start+1;
 cout<<res<<endl; 
 
 }
   }; 
