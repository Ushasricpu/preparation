#include <iostream>
using namespace std;
// Function definition
int fact(int number) {
    int count;
    if(number<=0){
        return -1;
    }
    for(int i=5;number/i>=1;i*=5)
        count+=number/i;
        return count;
}


//to check zeros it occurs when 2 and 5 are present.
// Basically the count 5 in the prime factors of the factorial of a given number gives the count of zeros.
// 5!=120. prime factors= 2*3*5. count of 5 =1

int main() {   
    int number; 
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    std::cout << "Factorial of " << number << " is: " << fact(number) << std::endl;
    return 0;
}

