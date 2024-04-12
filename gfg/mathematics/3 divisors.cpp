#include<iostream>
using namespace std;


int division(int n){
    int count;
    for(int i=1;i<n;i++){
        for(int j=1; j<=i; j++){
            if(i% j==0){
                count++;
            }
        }
        
    }
}

int main(){
    int n;
    cout<<"number"<<endl;
    cin>>n;
    cout<<division(n);
}


// #include<iostream>
// using namespace std;



// int division(int n){
//     int count=2;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             count++;
//         }
        
//     }
//     return count;
    
// }

// int count(int n){
//     int count=0;
//     for(int i=0; i<=n; i++){
//         if(division(i)==3){
//         count ++;}
//     }
//     return count;
// }



// int main(){
//     int n;
//     cout<<"number"<<endl;
//     cin>>n;
//     cout<<count(n)<<endl;
// }


