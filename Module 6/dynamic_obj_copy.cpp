#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
int main(){
    Person* tahsin=new Person("Tahsin",21);
    Person* ferdous=new Person("Ferdous",22);
    
    // tahsin=fedous;// this is not recommended
    // delete fedous;
    // tahsin->name=ferdous->name;
    // tahsin->age=ferdous->age;
    *tahsin=*ferdous;
    delete ferdous;
    cout<<tahsin->name<<" "<<tahsin->age<<endl;
    return 0;
}