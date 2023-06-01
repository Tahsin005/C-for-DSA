#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int english_marks;
};
bool compare(Student a,Student b){
    if( (a.math_marks + a.english_marks) > (b.math_marks+ b.english_marks)) return true;
    else if((a.math_marks + a.english_marks)==(b.math_marks+ b.english_marks)){
        if(a.id<b.id) return true;
        else return false;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math_marks>>a[i].english_marks;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].english_marks<<endl;
    }
    return 0;
}