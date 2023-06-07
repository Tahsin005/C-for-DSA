#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int id;
        char section;
        float cgpa;
};
bool compare(Student a,Student b){
    if(a.cgpa> b.cgpa) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    Student a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i].name);
        cin>>a[i].id>>a[i].section>>a[i].cgpa;
        cin.ignore();
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].section<<" "<<a[i].cgpa<<endl;
    }
    return 0;
}