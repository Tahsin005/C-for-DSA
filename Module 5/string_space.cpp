#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    // cin.ignore();
    getchar();
    string s;
    // cin>>s;
    // cin.getline(s,100); for char s[100];
    //it will not work for this because this is a
    //a dynamic string
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
} 