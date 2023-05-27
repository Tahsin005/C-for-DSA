#include<bits/stdc++.h>
using namespace std;
int main(){
    // string a="Hello";
    // string b="World";
    // a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;

    // push back

    // a= "HelloA";
    // a=a+"A";
    // a[5]='A'; // doesn't work
    // a.push_back('A');
    // cout<<a<<endl;
    // a.pop_back();
    // cout<<a<<endl;
    // a.pop_back();
    // cout<<a<<endl;

    // assign
    // a="Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;

    string a= "HelloWorld";
    // a.erase(4,1); // 4 is the starting index and  next 
    //parameter is the number of characters to delete
    // a.erase(4,3);  
    // a.replace(4,3,"HI_ihave");

    a.replace(5,0,"Tahsin");// it is line inserting without deleting
    // a.insert(5,"Tahsin");
    cout<<a<<endl;
    
    return 0;
}