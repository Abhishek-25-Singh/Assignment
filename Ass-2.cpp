// Assignment of While,for ,do and range based for.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



#include <iostream>

//int main()
//{
//    int number{};
//    std::cout << "please enter maximum limit value to print odd number = " << std::endl;
//    std::cin >> number;
//    int i1n{ 1 };
//    std::cout << "print odd number from 1 to " << number << std::endl;
//    while (i1n <= number) {
//        std::cout << i1n << std::endl;
//        i1n = i1n + 2;
//    }
//    return 0;
//}
 

/*Print odd in Range */
int main()
{
    int number{};
    std::cout << "please enter maximum limit value to print odd number = " << std::endl;
    std::cin >> number;
    int i1n{ };
    std::cout << "Please enter Minimum limit :" ;
    std::cin >> i1n;
    std::cout << "print odd number from " << i1n << " to " << number << std::endl;
    while (i1n <= number) {
        if (i1n % 2 != 0) {
            std::cout << i1n << std::endl;
            
        }
        i1n = i1n + 1;
       
    }
    return 0;
}

