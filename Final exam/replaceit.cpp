#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test){
        string s,x;
        cin>>s>>x;
        
        while(s.find(x)!= -1){
            s.replace(s.find(x),x.size(),"$");
        }
        cout<<s<<endl;
        test--;
    }

    return 0;
}