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


int lcm(int a, int b){
    int s;
    s=a*b;
    return s/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<lcm(a,b)<<endl;
}


//for lcm efficicient solution lcm(a,b)=(a*b)/gcd(a,b)
