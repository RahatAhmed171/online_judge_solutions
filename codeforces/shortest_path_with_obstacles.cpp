#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
int t;
int xa,xb,xc,xd,xe,xf;
int start,fail,end;
int diff;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>xa >>xb;
cin>>xc >>xd;
cin>>xe >>xf;


diff=abs(xa-xc)+abs(xb-xd);

if(xa==xe && xc==xe){

if(xb<xf && xf<xd)
{
diff=diff+2;
}
else if(xd<xf && xf<xb)
{
diff=diff+2;
}
else{
}
//cout<<diff<<endl;

}
else if(xb==xf && xd==xf)
{
if(xa<xe && xe<xc)
{
diff=diff+2;
}
else if(xc<xe && xe<xa)
{
diff=diff+2;
}
else{
//
}
}
else
{
}
cout<<diff<<endl;


}
}




 



    
