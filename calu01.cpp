#include<bits/stdc++.h>
using namespace std;
double calculator(double ans,int a,char c){
    switch(c){
        case '+': return ans+a;
        break;
        case '-': return ans-a;
        break;
        case '*' : return ans*a;
        break;
        case '/' : return ans/a;
        break;
    }
}
int main(){
    int a,b=0;
    char s[5]={'+','-','*','/','%'};
    char c;
    double ans;
    cin>>ans;
    do 
    {
        b=0;
        cin>>c;
        for(int i=0;i<5;i++){
            if(c==s[i]){
                cin>>a;
                ans=calculator(ans,a,c);
                b=1;
                cout<<ans;
            }
        }
    
    }while(b==1);
    cout<<ans<<endl;
}