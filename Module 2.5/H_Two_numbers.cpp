#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B;
    cin>>A>>B;

    double divisionResult = A / B;

    double floorResult=floor(divisionResult);
    double ceilResult=ceil(divisionResult);
    double roundResult=round(divisionResult);

    cout<<"floor "<<A<<" "<<"/"<<" "<<B<<" "<<"="<<" "<<floorResult<<endl;
    cout<<"ceil "<<A<<" "<<"/"<<" "<<B<<" "<<"="<<" "<<ceilResult<<endl;
    cout<<"round "<<A<<" "<<"/"<<" "<<B<<" "<<"="<<" "<<roundResult<<endl;
    return 0;
}