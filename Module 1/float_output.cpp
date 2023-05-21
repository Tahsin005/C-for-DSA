#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a;

    cin>>a;
    // cout<<a;
    // printf("%.2f",a);
    cout<<fixed<<setprecision(2)<<a;
    return 0;
}