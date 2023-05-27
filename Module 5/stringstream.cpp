#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // stringstream ss(s);
    stringstream ss;
    ss<<s;
    string word;
    int count=0;
    while(ss >> word){
        cout<<word<<endl;
        count++;
    }
    cout<<"There are "<<count<<" Words in this sentence"<<endl;
    return 0;
}