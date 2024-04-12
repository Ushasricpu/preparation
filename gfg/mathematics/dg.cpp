#include <iostream>
using namespace std;

int fact(int n){
    int x,y;
    if(n==0){
        return 1;
    }
    else{
         x= n*fact(n-1);
         return x;
    }
    return -1;
}


int count(int n){
    int y;
    int count1=fact(n);
    string str = to_string(count1);
    y=str.length();
    return y;

}

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"factorial is"<<count(n)<<endl;
}