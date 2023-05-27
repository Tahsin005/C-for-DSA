#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    // string:: iterator it;
    cin>>a;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<*a.begin()<<endl;
    // cout<<*(a.end()-1)<<endl;

    /*different syntax*/
    // for(it=a.begin();it<a.end();it++){
    //     cout<<*it<<endl;
    // }
    // for(string:: iterator it=a.begin();it<a.end();it++){
    //     cout<<*it<<endl;
    // }
    for(auto it=a.begin();it<a.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}