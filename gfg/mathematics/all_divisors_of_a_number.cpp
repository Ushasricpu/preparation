#include <iostream>
using namespace std;



int divisors(int n){
    int count=0;
    if(n<0){
        return -1;
    }
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
            cout<<i<<" ";
            }
        } 
    cout<<endl;
    return count;
    } 

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<divisors(n)<<endl;
}