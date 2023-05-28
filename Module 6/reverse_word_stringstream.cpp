#include<bits/stdc++.h>
using namespace std;
void print_reverse(stringstream &ss){
    string word;
    if(ss>>word){
        print_reverse(ss);
        cout<<word<<endl;
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    // string word;
    // while(ss>>word){
    //     cout<<word<<endl;
    // }
    print_reverse(ss);
    return 0;
}