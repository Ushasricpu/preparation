#include <iostream>
#include <math.h>
using namespace std;


bool bit(int n,int k ){
    if((n>>k)&1){
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

//if return as true and fals echeck function name as bool
// n=2, k=3 
//0010 right shift to 3 positions =  0 0 1 0(here 0 1 0 will be cancelled) = 0
//0 & 1 = 0 


//n=5, k=1
//0101 right shift to one position = 0 1 0 1(here 1 will be cancelled) = 1
//1 & 1 =1