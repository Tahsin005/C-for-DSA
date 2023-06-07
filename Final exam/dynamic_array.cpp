#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a=new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int *b=new int[10];
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }

    for(int i=5;i<10;i++){
        cin>>b[i];
    }   
    delete[] a;
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}