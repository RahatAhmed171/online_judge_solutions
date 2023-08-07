#include<iostream>
#include<string>
#include<vector>
 

 
using namespace std;
int main(){
int t;
int n;
char i;
int maximum=0;
int mid;


vector<char>george;
vector<char>enemy;
cin>>t;
for(int a=0;a<t;a++)
{
cin>>n;
mid=(n*2)/2;

for(int j=0;j<n*2;j++)
{
cin>>i;
if(j<mid)
{
enemy.push_back(i);

}
else{
george.push_back(i);

}

}
for(int k=0;k<mid;k++)
{

if(george[k]!='0')
{


if(enemy[k]!='1' && enemy[k]!='5')
{ 
maximum=maximum+1;
enemy[k]='5';

}
else if((k!=0) && (enemy[k-1]!='5') &&( enemy[k-1]!='0'))
{
maximum=maximum+1;
enemy[k-1]='5';


}
else if((k!=mid-1) && (enemy[k+1]!='5') && (enemy[k+1]!='0'))
{
maximum=maximum+1;
enemy[k+1]='5';

}
else{
}


}
}
cout<<maximum<<endl;
 
 enemy.clear();
george.clear();
 maximum=0;


}


}




 



    
