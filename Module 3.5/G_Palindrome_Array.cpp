#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int palindrome=1;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            palindrome=0;
            break;
        }
    }
    (palindrome==1)?cout<<"YES":cout<<"NO";
    return 0;
}