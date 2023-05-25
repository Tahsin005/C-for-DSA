#include<bits/stdc++.h>
using namespace std;
class Size_of_object{
    public:
        int a;
        double b;
        char c;
};
int main(){
    Size_of_object obj;
    cout<<"Size of object: "<<sizeof(obj)<<" bytes";
    return 0;
}