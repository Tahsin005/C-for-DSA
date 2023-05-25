#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;

        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int minSum=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++) {
                int sum = A[i] + A[j] + j - i;
                minSum=min(minSum,sum);
            }
        }
        cout<<minSum<<'\n';
    }
    return 0;
}