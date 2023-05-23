#include<bits/stdc++.h>
using namespace std;
int main(){
    int day,month,year;
    cin>>day;
    year=day/365;
    cout<<year<<" "<<"years"<<endl;

    day=day%365;
    month=day/30;
    cout<<month<<" "<<"months"<<endl;

    day=day%30;
    cout<<day<<" "<<"days"<<endl;
    return 0;
}