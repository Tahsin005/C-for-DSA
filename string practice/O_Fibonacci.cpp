#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n <= 0){
        return -1;
    }
    else if(n == 1){
        return 0;
    } 
    else if(n == 2){
        return 1;
    } 
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    int result=fibonacci(n);
    if(result != -1){
        cout<<result;
    }
    
    return 0;
}