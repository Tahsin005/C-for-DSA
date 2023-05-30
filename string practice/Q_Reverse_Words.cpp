#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    
    string word;
    /*first e amra 1st word ta stringstream theke ber kore print kore dibo*/
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    /*Example hishebe "I am hello" dhorle , 1st word mane I print hoi
    gese and stringstream theke ber hoi gese*/
    while (ss>>word)
    {
        
         int i = 0;
         int j = word.size() - 1;
         while (i<j)
         {
            swap(word[j],word[i]);
            i++;
            j--;
         }
         /*Ekhn just baki word gula print korbo..means "am hello" er reverse
         ekhane age space print korar karon holo jate last er space ta print na hoi*/
        cout<<" "<<word;
    }
    
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
    
//     ss>>word;
//     reverse(word.begin(),word.end());
//     cout<<word;
//     while(ss>>word){
//         reverse(word.begin(),word.end());
//         // s.reverse(word.begin(),word.end());
//         cout<<" "<<word;
//     }
//     // cout<<s<<endl;
//     return 0;
// }