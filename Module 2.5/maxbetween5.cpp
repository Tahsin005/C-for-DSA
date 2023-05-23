#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,mx;
    cin>>a>>b>>c>>d>>e;
    mx=max(a,max(b,max(c,max(d,e))));
    cout<<mx<<endl;
    return 0;
}