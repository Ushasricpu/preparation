#include <iostream>

// Function definition
int fact(int number) {
    if(number == 0) {
        return 1;
    }
    return number * fact(number - 1);
}


int main() {   
    int number; 

    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    std::cout << "Factorial of " << number << " is: " << fact(number) << std::endl;
    return 0;
}

