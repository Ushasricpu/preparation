#include <iostream>


//without abs functoion
int cf(int number, int opt) {
    if(opt == 1) {
        return (9/5*number)+32;
    }
    else if(opt==2){
        //In arthematic opeartions we can use () directly
        return (5/9*number)+32;
    }
    return -1;
}


int main() {   
    int number, opt;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    std::cout << "select option " << "1. celsius\n"  "2.Faranheit" << std::endl;
    std::cin >> opt;
    std::cout << cf(number,opt) << std::endl;
    return 0;
}


//celsius and farenhiet