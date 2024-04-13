//geometric progression

#include<iostream>
#include<math.h>
using namespace std;


float gp(float a, float b, float n){
    float ratio=b/a;
    int power=n-1;
    return  (pow((ratio),power)*a);
}

int main(){
    float a,b,n;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"gp is"<< gp(a,b,n)<<endl;
}