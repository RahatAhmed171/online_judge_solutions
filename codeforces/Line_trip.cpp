#include <iostream>
#include <vector>
#include <string>
#include<map>
using namespace std;


int main() {
vector<int>arr;
int t;
int n,x,a;
int distance,minimum;

cin>>t;
for(int i=0;i<t;i++)
{
arr.push_back(0);
minimum=0;
cin>>n;
cin>>x;
for(int j=0;j<n;j++)
{

cin>>a;
arr.push_back(a);


}
arr.push_back(x);
for(int m=1;m<arr.size()-1;m++)
{
distance=arr[m]-arr[m-1];
if(distance>minimum)
{
minimum=distance;
}
}
distance=x-arr[arr.size()-2];
distance=distance*2;
if(distance>minimum)
{
minimum=distance;
}
cout<<minimum<<endl;
arr.clear();
}
 }; 
