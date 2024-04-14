#include <iostream>
using namespace std;



bool reverse(int a){
    int rem=0;
    
    while(a>0){
        if(a%10==0){
            rem=rem*10+a/10;
        }
        a=a/10;
        break;
    }
    if(rem==a){
        return true;
    }
    return false;    
}

int main(){
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<reverse(a)<<endl;
}

//for palindrome I am checking with 10.
//for a=2002