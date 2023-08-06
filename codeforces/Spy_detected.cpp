#include<iostream>
#include<string>
#include <unordered_map>
#include<vector>
 

 
using namespace std;
int main(){
int t;
int n;
int a;
int spy;
int freq_num;
unordered_map<int, int> umap;
vector<int>numbers;
cin>>t;

for(int i=0;i<t;i++)
{
cin>>n;

for(int j=0;j<n;j++)
{
cin>>a;
if(umap.find(a) != umap.end())
{
freq_num=a;
}
else{
umap[a]=1;
}
numbers.push_back(a);

}
for(int k=0;k<numbers.size();k++)
{
if(numbers[k]!=freq_num)
{
spy=k+1;
}
}
cout<<spy<<endl;
numbers.clear();
umap.clear();

}
}




 



    
