#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
int t;
int n;
int sum=0;
float q;
int k;
cin>>t;
for(int i=0;i<t;i++)
{ 
 cin>>n;
 for(int j=0;j<n;j++)
 {
 cin>>k;
 sum=sum+k;
}//for n

 q = ((float)sum/n);

if(q==1)
{
cout<<0<<endl;
}
else if(sum<n){
cout<<1<<endl;
}
else{
cout<<sum-n<<endl;
}
 
sum=0;
}//for t
}


 



    
