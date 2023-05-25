#include<bits/stdc++.h>
using namespace std;
/*Create two objects of the Person class from question 2-c and 
initialize them with proper value. 
Now compare whose age is greater, and print his/her name.*/
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
    char name1[100]="MD. Tahsin Ferdous";
    char name2[100]="Lilin Chakma";
    Person *tahsin = new Person(name1,5.8,21);
    Person *lilin = new Person(name2,5.8,20);
    if(tahsin->age > lilin->age){
        cout<<tahsin->name<<endl;
    }
    else if(tahsin->age < lilin->age){
        cout<<lilin->name<<endl;

    }
    return 0;
}