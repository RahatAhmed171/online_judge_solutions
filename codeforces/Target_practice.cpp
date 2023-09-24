    
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
int t,m,n,res=0;
char mychar;
cin>>t;
for(int i=0;i<t;i++)
{
m=1;
n=1;
res=0;
 for(int j=0;j<100;j++)
 {
 cin>>mychar;
 
 if(mychar=='X')
 
 { 
 
  
 if((m==1 || m==10)||(n==1 || n==10))
 {
 res=res+1;
 }
else if((m==2 || m==9)||(n==2 || n==9))
 {
 res=res+2;
 }
else if((m==3 || m==8)||(n==3 || n==8))
 {
 res=res+3;
 }
else if((m==4 || m==7)||(n==4 || n==7))
 {
 res=res+4;
 }
else
 {
 res=res+5;
 }
 
 }//X
 n=n+1;
 if(n>10)
 {
 m=m+1;
 n=1;
 
 
 }
 
 }//100
cout<<res<<endl;
    
}//t
}//main    
    
    
    
    
    
