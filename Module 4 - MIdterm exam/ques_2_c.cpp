#include<bits/stdc++.h>
using namespace std;
/*Create a class named Person where the class will have 
properties name(string), height(float) and age(int). 
Make a constructor and create a dynamic object 
of that class and finally pass proper values using the constructor. */
class Person{
    public:
        char name[100];
        float height;
        int age;

        Person(char n[100],float h,int a){
            strcpy(name,n);
            height=h;
            age=a;
        }
};
int main(){
    char name[100]="Tahsin Ferdous";
    Person *tahsin = new Person(name,5.8,21);
    cout<<tahsin->name<<endl;
    cout<<tahsin->height<<endl;
    cout<<tahsin->age<<endl;
    return 0;
}