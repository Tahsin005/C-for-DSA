#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n){
            // cout<<"My name is Mohammad Tahsin Ferdous"<<endl;
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main(){
    char name1[100]="Rahim Ullah";
    char name2[100]="Karim Solimullah";
    Student rahim(29,'A',7,name1);
    Student karim(55,'D',7,name2);
    // Student rahim(29,'A',7,"Rahim Ullah");
    // Student karim(55,'D',7,"Karim Solimullah");

    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    cout<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.name<<endl;
    return 0;
}