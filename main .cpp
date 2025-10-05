#include <iostream>


int main () {

    std::cout << " hi , Please Enter your First name : " ;
    std::string  fName ;
    std::cin >> fName ;

    std::cout << " Welcome to Programing Environment \"" << fName << "\" . Please Enter your Last Name : " << std::endl ;
    std::string lName ;
    std::cin >> lName ;

    std::cout << " great ! Please Enter your Age : " << std::endl ;
    int Age ;
    std::cin >> Age ;
    

    return 0 ; 
}
