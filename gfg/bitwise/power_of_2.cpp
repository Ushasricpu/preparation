#include <iostream>
#include <math.h>
using namespace std;


int power(int a){
    for(int i=1;i<=a; i++){
        if(pow(2,i)==a){
            return i;
        }
    }
    return 1;

    //second approach
    return ceil(log2(a))==floor(log2(a));

    
}

int main(){
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<power(a)<<endl;
    }


    //here ceila nd floor function defines follow
    // ceil() Ceil of 2.3 is : 3 ceil of -2.3 is : -2
    //floor() Floor of 2.3 is : 2 floor of -2.3 is : -3

    //hence log2(8)=3