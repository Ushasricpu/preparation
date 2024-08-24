#include <bits/stdc++.h>
using namespace std;

//adult or not
// int main(){
//     int n;
//     cout<<"enter age"<<endl;
//     cin>>n;
//     if (n>=18){
//         cout<<"adult"<<endl;
//     }
//     else{
//         cout<<"not adult"<<endl;
//     }
//     return 0;
// }


//grading ssystem

int main(){
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    if (marks<=44){
        cout<<"grade E"<<endl;
    }
    else if (marks<=49){
        cout<<"grade D"<<endl;
    }
    else if (marks<=59){
        cout<<"grade C"<<endl;
    }
    else if (marks<=79){
        cout<<"grade B"<<endl;
    }
    else if (marks<=100){
        cout<<"grade A"<<endl;
    }
    else if (marks<25){
        cout<<"grade F"<<endl;
    }
    else{
        cout<<"wrong score"<<endl;
    }
    return 0;
}