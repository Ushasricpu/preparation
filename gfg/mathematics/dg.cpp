#include <iostream>
using namespace std;

long double fact(long double n){
    long double x,y;
    if(n==0){
        return 1;
    }
    else if(n>0){
         x= n*fact(n-1);
         return x;
    }
    return -1;
}


long double count(long double n){
    long double y;
    long double count1=fact(n);
    string str = to_string(count1);
    y=str.length();
    return y;

}

long double main(){
    long double n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"factorial is"<<count(n)<<endl;
}