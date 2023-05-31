#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,x,word;
    getline(cin,s);
    getline(cin,x);
    int count=0;

    stringstream ss(s);
    while(ss>>word){
        if(word == x){
            count++;
        }
    }
    cout<<count;
    return 0;
}