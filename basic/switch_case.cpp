#include <bits/stdc++.h>
using namespace std;


//the input taking should be the expression in switch
// in cases what operation(expression) should be there 

//  print number of days in a month using switch case



// int main()
// {
//     int month;

//     /* Input month number from user */
//     cout<<"Enter month number(1-12): ";
//     cin>>month;

//     switch(month)
//     {
//         /* Group all 31 days cases together */
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12: 
//             cout<<"31 days";
//             break;

//         /* Group all 30 days cases together */
//         case 4:
//         case 6:
//         case 9:
//         case 11: 
//             cout<<("30 days";
//             break;

//         /* Remaining case */
//         case 2: 
//             cout<<("28/29 days";
//             break;

//         default: 
//             cout<<"Invalid input! Please enter month number between 1-12";
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