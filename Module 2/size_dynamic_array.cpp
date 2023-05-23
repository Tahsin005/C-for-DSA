#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a=new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int *b=new int [7];
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    b[5]=69;
    b[6]=420;
    for(int i=0;i<7;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // deleting array
    delete[] a;// delete[] a; will delete memory
    //heap but won't delete memory from stack
    //it will save space in a long run
    // trying to access after deleting
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}