#include <iostream>
#include<vector>
#include<string>


using namespace std;
int main(){

int T,n,m,j;
string x,s;
bool found;
cin>>T;
for(int i=0;i<T;i++)
{
cin>>n;
cin>>m;
cin>>x;
cin>>s;
found=false;

if (x.find(s) !=string::npos) {
        cout<<0<<endl;
    } 
else{
for(j=0;j<5;j++)
{
x=x+x;
if (x.find(s) !=string::npos) {
found=true;
        break;
    } 
}
if(found==true)
{
cout<<j+1<<endl;
}
else{
cout<<-1<<endl;
}
}


}

}
    
