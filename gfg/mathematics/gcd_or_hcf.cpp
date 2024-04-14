#include <iostream>
using namespace std;


int gcd(int a, int b){
    if(a==b){
        return a;
        }
    else if(a>b){
        if(a%b==0){
            return b;
        }
        return gcd(a-b,b);
        
    }
    else{
        if(b%a==0){
            return a;
        }
        return  gcd(a,b-a);
    }
}

int main(){
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<gcd(a,b)<<endl;
}


//if a=98, b=56. now a>b so gcd(a-b,b) then (b%a==0)
