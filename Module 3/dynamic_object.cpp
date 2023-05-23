#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n){
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main(){
    char name[100]="Rahim Ullah";
    // student rahim(40,'A',13,name);

    //syntax if there is no constructor
    // Student* rahim=new Student;

    //syntax if there is a constructor
    Student* rahim=new Student(40,'A',13,name);

    cout<<rahim->roll<<endl;
    (*rahim).roll=55;
    //(*rahim).  ==  rahim->
    cout<<(*rahim).roll<<endl;
    rahim->roll=55;
    cout<<(*rahim).roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->name<<endl;

    //delete an object
    delete rahim;
    cout<<(*rahim).roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->name<<endl;
    return 0;
}