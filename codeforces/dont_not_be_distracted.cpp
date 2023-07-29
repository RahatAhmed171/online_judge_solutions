#include<iostream>
#include<string>
#include<vector>
#include <unordered_map>
using namespace std;
int main(){
int t;
vector<char>tasks;
unordered_map<char, int> umap;
bool flag;
int prev;
int diff;
char task;
int n;
char ch;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
for(int j=0;j<n;j++)
{
cin>>task;
tasks.push_back(task);

}
flag=true;
for(int k=0;k<tasks.size();k++)
{
ch=tasks[k];
if(umap.count(ch) != 0)
{
prev=umap[tasks[k]];
diff=k-prev;
if(diff==1)
{
umap[tasks[k]]=k;
}
else{
flag=false;
}

}
else{
umap[tasks[k]]=k;
}


}
if(flag==true)
{
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
tasks.clear();
umap.clear();



}
}




 



    
