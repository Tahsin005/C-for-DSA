#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,sum=0;
    cin>>test;
    while(test){
        cin>>n;
        // char s[100];
        string s;
        cin>>s;
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            int val=s[i]-65;
            count[val]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]>0){
                if(count[i]>1){
                    sum+=(2+(count[i]-1));
                }
                if(count[i]==1){
                    sum+=2;
                }
            }
        }
        cout<<sum<<endl;
        sum=0;
        test--;
    }
    return 0;
}