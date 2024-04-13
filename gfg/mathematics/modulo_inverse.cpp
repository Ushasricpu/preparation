//geometric progression

#include<iostream>
#include<math.h>
using namespace std;


 long long inverse(long long a, long long m){
    long long s=a%m;
    int k;
    for(int i=0;i<=m;i++){

        if(((s*(i%m))%m)==1){
            k=i;
            break;
        }
    }
    return k;
}


//to find smallest number



int main(){
    long long a,m;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"sum of numbers is"<< inverse(a,m)<<endl;
}