#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main(){
    Student rahim;
    rahim.roll=29;
    rahim.cls=9;
    rahim.section='A';
    char nm[100]="Rahim";
    strcpy(rahim.name,nm);

    Student Karim;
    Karim.roll=55;
    Karim.cls=9;
    Karim.section='C';
    char nm2[100]="Karim";
    strcpy(Karim.name,nm2);

    cout<<rahim.name;
    return 0;
}