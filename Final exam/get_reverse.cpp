#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int math_marks;
        int english_marks;
};

int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].math_marks>>a[i].english_marks;
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].math_marks<<" "<<a[i].english_marks<<endl;
    }
    return 0;
}