#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // different ways to access first element
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s.front()<<endl;

    // different ways to access last element
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;

    return 0;
}