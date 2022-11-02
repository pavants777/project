#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
  return a+b;
}
int sub(int a,int b){
  return a-b;
}
int muli(int a,int b){
  return a*b;
}
float divi(int a,int b){
  return a/b;
}
int mod(int a,int b){
  return a%b;
}
int main(){
int a,b;
char p;
cin>>a>>p>>b;
switch(p){
  case '+': cout<<add(a,b)<<endl;
  break;
  case '-': cout<<sub(a,b)<<endl;
  break;
  case '*': cout<<muli(a,b)<<endl;
  break;
  case '/': cout<<divi(a,b)<<endl;
  break;
  case '%': cout<<mod(a,b)<<endl;
  break;
  default :
  cout<<"invalid charctere"<<endl;
}
}
