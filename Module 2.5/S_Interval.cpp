#include<bits/stdc++.h>
using namespace std;
int main(){
    float a;
    cin>>a;
    if(a>=0.0 && a<=25.0){
        cout<<"Interval [0,25]";
    }
    else if(a>25.0 && a<=50.0){
        cout<<"Interval (25,50]";
    }
    else if(a>50.0 && a<=75.0){
        cout<<"Interval (50,75]";
    }
    else if(a>75.0 && a<=100.0){
        cout<<"Interval (75,100]";
    }
    else{
        cout<<"Out of Intervals";
    }
    return 0;
}