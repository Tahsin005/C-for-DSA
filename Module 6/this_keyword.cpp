#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
            // (*this).age;
        }
        void hello(){
            cout<<"Hello"<<endl;
        }
};
int main(){
    Person tahsin("MD. Tahsin Ferdous",21);
    cout<<tahsin.name<<" "<<tahsin.age<<endl;
    tahsin.hello();
    return 0;
}