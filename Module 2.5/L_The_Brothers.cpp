#include<bits/stdc++.h>
using namespace std;
int main(){
    char firstName1[10000], secondName1[10000];
    char firstName2[10000], secondName2[10000];
    
    cin>>firstName1>>secondName1;
    cin>>firstName2>>secondName2;

    if(strcmp(secondName1, secondName2) == 0){
        cout<<"ARE Brothers";
    } 
    else{
        cout<<"NOT";
    }
    return 0;
}