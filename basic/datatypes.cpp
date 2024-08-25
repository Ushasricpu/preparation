#include<iostream>
using namespace std;

int main() {
    string s1,s2,str;
    cout<<"enter string"<<endl;
    cin>> s1>>s2;             // input :hey string hi usha
    cout<<s1<<endl<<s2<<endl; //output: hey
                                     // string 
    getline(cin,str);
    cout<<str<<endl;          //  hi usha
    char ch='g';
    string st="usha";
    return 0;
}