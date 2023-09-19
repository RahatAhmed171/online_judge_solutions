
#include <iostream>
#include<cmath>
 
using namespace std;
int main(){
float n;
int k,x;
int diff;
float hey;
float ada;
float duffer;
float total;
int t;
int a,d;
float frac;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
cin>>k;
cin>>x;

if (n<k)
{
cout<<-1<<endl;
}

else
{
if(k==x)
{
x=x-1;
}
if(x<k-1)
{
cout<<-1<<endl;
}else{
a=1;
d=1;
frac=float(n/2);

total=frac*(2*a+((n-1)*d));

diff=abs(n-k);
a=k;
n=diff+1;
hey=float((n/2)*(2*a+(n-1)*d));

duffer=total-hey;
ada=x*diff;
duffer=duffer+ada;
cout<<duffer<<endl;
}

}
}


 }
