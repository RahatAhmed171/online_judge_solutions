#include <iostream>
#include <vector>
#include <string>
#include<map>
using namespace std;


int main() {
vector<int>arr;
int t;
int n;
string s;
int count,res;

cin>>t;
for(int i=0;i<t;i++)
{
count=0;
cin>>n;
cin>>s;
for(int j=0;j<n;j++)
{
if(s[j]=='.')
{

arr.push_back(0);
count=count+1;
}
else{
arr.push_back(1);

}

}
for(int k=1;k<n-1;k++)
{
if(arr[k]==0)
{
if(arr[k]==arr[k-1] && arr[k]==arr[k+1])
{

count=2;
break;

}
}

}
res=count;
cout<<res<<endl;
arr.clear();


};
 } 
