#include<iostream>
using namespace std;

bool prime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
   
}


int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<< (prime(n))<<endl;
    return 0;
}


