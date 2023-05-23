#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cin.getline(s,100);
    int size=strlen(s);
    int cap=0,small=0,other=0;
    for(int i=0;i<size;i++){
        (s[i]>='a' && s[i]<='z')?small++:((s[i]>='A' && s[i]<='Z')?cap++:other++);
    }
    cout<<cap<<" "<<small<<" "<<other<<endl;
    return 0;
}