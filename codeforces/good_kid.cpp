
#include <iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
int main(){
int t;
int n;
int res=1;
int number;
vector<int>a;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
for(int j=0;j<n;j++)
{
cin>>number;
a.push_back(number);
}
sort(a.begin(), a.end());

a[0]=a[0]+1;
for(int k=0;k<n;k++)
{
res=res*a[k];
}
cout<<res<<endl;
a.clear();
res=1;
}

 }
