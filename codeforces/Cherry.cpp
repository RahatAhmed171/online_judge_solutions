#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
int t;
int n;
int a;

long long product;
long long maximum=0;
vector<long long>numbers;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
for(int j=0;j<n;j++)
{
cin>>a;
numbers.push_back(a);
}
for(int k=0;k<n-1;k++)
{
product=numbers[k]*numbers[k+1];
if(product>maximum)
{
maximum=product;
}
}
cout<<maximum<<endl;
maximum=0;
numbers.clear();

}

}




 



    
