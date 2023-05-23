#include<bits/stdc++.h>
using namespace std;
int * getarray(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int *ptr=getarray(n);
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
        // printf("%d ",*(ptr+i));
    }
    return 0;
}