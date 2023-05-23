#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // int mx=max(a,b);
    // cout<<mx<<endl;
    (a>b && a>c)?cout<<a<<endl:(b>a && b>c)?cout<<b<<endl:cout<<c<<endl;
    return 0;
}