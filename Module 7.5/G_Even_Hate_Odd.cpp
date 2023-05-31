#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int count_odd=0;
        int count_even=0;
        for(int k=0;k<n;k++){
            if(a[k]%2!=0){
                count_odd++;
            }
            else if(a[k]%2==0){
                count_even++;
            }
        }
        if((count_even+count_odd)%2==0){
            if(count_even==count_odd){
                cout<<"0"<<endl;
            }
            else if(count_even!=count_odd){
                if(count_even>count_odd){
                    cout<<(count_even-count_odd)/2<<endl;
                }
                else if(count_even<count_odd){
                    cout<<(count_odd-count_even)/2<<endl;
                }
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}