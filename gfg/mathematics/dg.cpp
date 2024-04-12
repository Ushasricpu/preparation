// #include <iostream>
// using namespace std;

// long double fact(long double n){
//     long double x,y;
//     if(n==0){
//         return 1;
//     }
//     else if(n>0){
//          x= n*fact(n-1);
//          return x;
//     }
//     return -1;
// }


// long double count(long double n){
//     long double y;
//     long double count1=fact(n);
//     string str = to_string(count1);
//     y=str.length();
//     return y;

// }

// int main(){
//     long double n;
//     cout<<"enter number"<<endl;
//     cin>>n;
//     cout<<"factorial is"<<count(n)<<","<<fact(n)<<endl;
// }


#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
//digits in factorial
using namespace std;
using namespace boost::multiprecision;

cpp_int fact(int n) {
    cpp_int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

int countDigits(cpp_int n) {
    int digits = 0;
    while (n != 0) {
        n /= 10;
        ++digits;
    }
    return digits;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cpp_int factorial = fact(n);
    int digits = countDigits(factorial);
    cout << "Factorial of " << n << " is " << factorial << " and it has " << digits << " digits." << endl;
    return 0;
}


//without doing factorial to count digits log will be used.

// if log 100 base 10 value=2 and log 1000 base 10 value = 3.

// if entered number =5 then starting from log2 +log3+log4+log5=log(2.65) v
// then value=2 after that total value=2+1=3


