#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
bool compare(Student a,Student b){
    if(a.marks > b.marks) return true;
    else return false;
}
int main(){
    Student a[3];
    //array of object e consturctor kaj korbe na
    for(int i=0;i<3;i++){
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    //sort function
    sort(a,a+3,compare);
    for(int i=0;i<3;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}