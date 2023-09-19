

#include <iostream>
#include<cmath>
 
using namespace std;
int main(){
int t;
float a,b,c;
int move=0;
float diff;
float half;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>a;
cin>>b;
cin>>c;
diff=abs(a-b);
half=diff/2;

move=ceil(half/c);
cout<<move<<endl;

 }
 }
