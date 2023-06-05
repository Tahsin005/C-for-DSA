#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test){
        string s;
        cin>>s;
        // int flag=0;
        int count=0;
        while(s.find("101") != -1){
            s.replace(s.find("101"),3,"$");
        }
        while(s.find("010") != -1){
            s.replace(s.find("010"),3,"$");
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='$'){
                count++;
            }
        }
        // (count>0)?cout<<"Good":cout<<"Bad";
        // cout<<endl;
        // cout<<s<<endl;
        if(count>0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
        test--;
    }
    return 0;
}
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==1){
        //         if(s[i]==1 && s[i+1]==0 && s[i+2]==1){
        //             flag=1;
        //         }
        //     }
        //     else if(s[i]==0){
        //         if(s[i]=0 && s[i+1]==1 && s[i+2]==0){
        //             flag=1;
        //         }
        //     }
        // }
        // if(flag==1){
        //     cout<<"Good"<<endl;
        // }
        // else{
        //     cout<<"Bad"<<endl;
        // }