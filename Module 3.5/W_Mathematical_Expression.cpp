#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,check1,check2,check3;
    char s,e;
    cin>>a>>s>>b>>e>>c;
    if(s=='+'){
        check1=a+b;
        if(check1 == c){
            cout<<"Yes";
        }
        else{
            cout<<check1;
        }
    }
    else if(s=='-'){
        check2=a-b;
        if(check2 == c){
            cout<<"Yes";
        }
        else{
            cout<<check2;
        }
    }
    else if(s=='*'){
        check3=a*b;
        if(check3 == c){
            cout<<"Yes";
        }
        else{
            cout<<check3;
        }
    }
    return 0;
}