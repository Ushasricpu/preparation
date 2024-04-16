#include <iostream>
#include <math.h>
using namespace std;


bool bit(int n,int k ){
    if(n&k>=1){
        return true;
    }
    return false;

}

int main(){
    int n,k;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter k"<<endl;
    cin>>k;
    cout<<bit(n,k)<<endl;
    }