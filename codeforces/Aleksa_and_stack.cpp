#include <iostream>
#include<vector>
#include<string>


using namespace std;
int main(){
vector<int>numbers;
int T,n,total,sequence,m,q;
cin>>T;
for(int i=0;i<T;i++)
{
cin>>n;
if(n%2==0)
{
q=n+1;
}
else{
q=n;
}
m=(q+1)/2;
total=(n+m)-1;
sequence=(2*total)-1;
for(int p=q;p<=sequence;p=p+2)
{
numbers.push_back(p);
}


for(int k=0;k<n;k++)
{
cout<<numbers[k]<<" ";
}
numbers.clear();
}

}
    
