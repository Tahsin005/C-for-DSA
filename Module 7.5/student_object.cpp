#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
bool compare(Student a,Student b){
    if(a.marks>b.marks) return true;
    else if(a.marks==b.marks){
        if(a.roll<b.roll) return true;
        else return false;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+n,compare);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}