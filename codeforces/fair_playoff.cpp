#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
int t;
int s1,s2,s3,s4;
int first,second,third,fourth;

cin>>t;
for(int i=0;i<t;i++)
{
cin>>s1;
cin>>s2;
cin>>s3;
cin>>s4;

if(s1>s2)
{
first=s1;
second=s2;
}
else{
first=s2;
second=s1;
}

if(s3>s4)
{
third=s3;
fourth=s4;
}
else{
third=s4;
fourth=s3;
}
if(first>fourth && third>second)
{
cout<<"YES"<<endl;

}
else{
cout<<"NO"<<endl;
}
}
}




 



    
