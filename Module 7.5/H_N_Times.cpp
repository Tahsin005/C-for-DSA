#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n;
    char c;
    cin>>test;
    while(test){
        cin>>n>>c;
        for(int i=1;i<=n;i++){
            cout<<c<<" ";
        }
        cout<<endl;
        test--;
    }
    return 0;
}