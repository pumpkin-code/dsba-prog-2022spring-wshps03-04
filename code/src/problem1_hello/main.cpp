////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 1: "Hello, %username%".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for their name and then outputs "Hello, <user>",
/// where <user> is the name the user.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>     // for std::cin, cout, endl
#include <string>       // for std::string

int main()
{
    using std::cout;

    std::string userName;
    //std::cin >> userName;
    //std::cin.getline()        // works with legacy c_style strings
    std::getline(std::cin, userName);

    /*std::*/cout << "Hello, " << userName << std::endl; // '\n'
    //std::cout << "Hello, " << userName << '\n'; //

    return 0;
}

void foo()
{
    std::cout << "asd";
}


