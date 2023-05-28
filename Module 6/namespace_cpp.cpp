#include<bits/stdc++.h>
using namespace std;
namespace Abrar{
    int age=22;
    void hello(){
        cout<<"Abrar namespace"<<endl;
    }
}
namespace Lilin{
    int age=20;
    void hello(){
        cout<<"Lilin namespace"<<endl;
    }
}
using namespace Abrar;
// using namespace Lilin;
int main(){
    // cout<<Abrar::age<<endl;
    // cout<<Lilin::age2<<endl;
    cout<<age<<endl;
    hello();
    // cout<<age2<<endl;
    // hello2();

    // if we don't use namespace we can give the same 
    // variable , object ,class name to all namespace
    cout<<Lilin::age<<endl;
    Lilin::hello();
    return 0;
}