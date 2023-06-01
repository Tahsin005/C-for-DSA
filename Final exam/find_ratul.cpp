#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word;
    int check=0;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>word){
        if(word == "Ratul"){
            check=1;
        }
    }
    (check==1)?cout<<"YES":cout<<"NO";
    return 0;
}