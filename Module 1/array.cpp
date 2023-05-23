#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count_even=0,count_odd=0;
    for(int i=0;i<n;i++){
        a[i]%2==0?count_even++:count_odd++;
    }
    cout<<count_even<<" "<<count_odd<<endl;
    return 0;
}