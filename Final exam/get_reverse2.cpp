#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    int start=0,end=n-1;
    while(start<end){
        int temp=a[start].id;
        a[start].id=a[end].id;
        a[end].id=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}