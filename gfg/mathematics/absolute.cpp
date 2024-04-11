#include <iostream>

//with abs functoion
int main() {   
    int number; 

    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    std::cout << "absolute of  " << number << " is: " << abs(number) << std::endl;
    return 0;
}


//without abs functoion
int absolute(int number) {
    if(number == 0) {
        return 0;
    }
    else if(number<=0){
        //In arthematic opeartions we can use () directly
        return -(number);
    }
    return number;
}


int main() {   
    int number; 
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    std::cout << "absolute of  " << number << " is: " << absolute(number) << std::endl;
    return 0;
}
