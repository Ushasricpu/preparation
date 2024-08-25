// # include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout<<"enter n"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     cout<<"you"<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// //2D array
// // arr[3][2]

#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    // Input the elements of the 2D array
    cout << "Enter elements for a 3x4 matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the elements of the 2D array
    cout << "The matrix is:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//for loop when number iteration time knnows
// while when do know iteration time i=i+1
//do while want to execute atleast once
// i=2;
// do{
// cout<"hello";
// i=i+1;
// }while(i<=1);
// cout<<i;