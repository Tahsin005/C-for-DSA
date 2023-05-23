#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],mx=INT_MIN,mn=INT_MAX;;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        mx=max(mx,a[i]);
    }
    
    for(int i=0;i<3;i++){
        mn=min(mn,a[i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}