#include<iostream>
#include<string>
#include<array>
#include<vector>

 

 
using namespace std;
int main(){
int t;
int n;
int a;
int sum=0;
int quotient;
int k=0;
vector<int>numbers;
cin>>t;

for(int i=0;i<t;i++)
{
cin>>n;

for(int j=0;j<n;j++)
{
cin>>a;
numbers.push_back(a);

sum=sum+a;
}
if(n==1)
{
cout<<0<<endl;
}
else if(sum%n!=0)
{
cout<<-1<<endl;
}
else{
quotient=sum/n;
for(int m=0;m<n;m++)
{
if(numbers[m]>quotient)
{
k=k+1;
}

}
cout<<k<<endl;
}
k=0;
sum=0;

numbers.clear();
}
}




 



    
