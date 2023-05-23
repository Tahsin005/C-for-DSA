#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a = new int;
    *a=10;
    cout<<*a<<endl;

    float *f = new float;
    *f=3.33;
    cout<<*f<<endl;
    delete a;
    delete f;
    return 0;
}