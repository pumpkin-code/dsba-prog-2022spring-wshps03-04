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


#include <iostream>     // used for cin, cout, endl....
#include <string>

//using std::cout;

using std::cout;

int main()
{

    // TODO: input your code here

    std::string userName; // not user_name,... full-qualified id
    //std::cin >> userName;     // reads a line bedfore a very first space char
    //std::cin.getline()        // readl the whole line with spaces, but uses c-style strings (obsolete)
    std::getline(std::cin, userName);   // reads a string entirely and properly


    //std::cout << "Hello, " <<  userName << std::endl;
    /*std::*/cout << "Hello, " <<  userName << '\n';    // the same as std::endl

    return 0;
}



void foo()
{
    cout << "asd";
}
