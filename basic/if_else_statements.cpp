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
// int main(){
//     int marks;
//     cout<<"enter marks"<<endl;
//     cin>>marks;
//     if (marks<=44){
//         cout<<"grade E"<<endl;
//     }
//     else if (marks<=49){
//         cout<<"grade D"<<endl;
//     }
//     else if (marks<=59){
//         cout<<"grade C"<<endl;
//     }
//     else if (marks<=79){
//         cout<<"grade B"<<endl;
//     }
//     else if (marks<=100){
//         cout<<"grade A"<<endl;
//     }
//     else if (marks<25){
//         cout<<"grade F"<<endl;
//     }
//     else{
//         cout<<"wrong score"<<endl;
//     }
//     return 0;
// }



int main(){
    int n;
    cout<<"enter day number"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
         cout<<"sunday"<<endl;
        break;
    case 2:
         cout<<"monday"<<endl;
        break;
    case 3:
         cout<<"tuesday"<<endl;
        break;
    case 4:
         cout<<"wednesday"<<endl;
        break;
    case 5:
         cout<<"thursday"<<endl;
        break;
    case 6:
         cout<<"friday"<<endl;
        break;
    case 7:
         cout<<"saturday"<<endl;
        break;
    default:
        cout<<"invalid"<<endl;
        break;
    }
    return 0;
}