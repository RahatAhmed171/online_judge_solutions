
#include <iostream>
#include<string>
 
using namespace std;
int main(){
    int t;
string hello;
char mychar;
string str1;
string result="NO";
cin>>t;
for(int i=0;i<t;i++)
{
cin>>hello;
if(hello=="abc")
{
    result="yes";
}
else{
str1="";
mychar=hello[1];
str1.push_back(mychar);
mychar=hello[0];
str1.push_back(mychar);
mychar=hello[2];
str1.push_back(mychar);
if(str1=="abc"){
    result="YES";
}
str1="";
mychar=hello[2];
str1.push_back(mychar);
mychar=hello[1];
str1.push_back(mychar);
mychar=hello[0];
str1.push_back(mychar);

if(str1=="abc"){
    result="YES";
}
str1="";
mychar=hello[0];
str1.push_back(mychar);
mychar=hello[2];
str1.push_back(mychar);
mychar=hello[1];
str1.push_back(mychar);
if(str1=="abc"){
    result="YES";
}
}
cout<<result<<endl;
result="NO";
}



}


 
