# include <iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<=n-1;j++){
//             cout<<i+1;
//         }
//         cout<<"\n";
//     }
//     return 0;

// }


// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<=n-1;j++){
//             cout<<j+1;
//         }
//         cout<<"\n";
//     }
//     return 0;

// }


int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<=n-1;j++){
            cout<<(j-i)+1;
        }
        cout<<"\n";
    }
    return 0;

}