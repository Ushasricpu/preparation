//geometric progression

#include<iostream>
#include<math.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;


 long long addition_under_modulo(long long a, long long b){
//unsigned long long int is biggest one
//formula for modulo addition: (a+b) mod m =(a mod m+b mod m) mod m
    long long k=pow(10,9)+7;
    long long c=a%k;
    long long d=b%k;
    return (c+d)%k;
}

int main(){
    long long a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"sum of numbers is"<< addition_under_modulo(a,b)<<endl;
}