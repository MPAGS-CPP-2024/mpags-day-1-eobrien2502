// mpags-cipher.cpp

#include <iostream>
#include <string>
int main()
{
    int a_whole_num{3};
    a_whole_num = 4;
    std::cout << a_whole_num << std::endl;

    double decimal_num{1.2};
    decimal_num = 1.6;
    std::cout << decimal_num << std::endl;

    // int another_num{decimal_num*2};

    const double c_dbl{4.8};
    std::cout << c_dbl << std::endl;

    int int_num_2{7};
    int_num_2 = 3;


    std::string my_str {"My String"};
    std::cout << my_str << std::endl;

    int a{5};
    double d{7.2};
    double product{a*d};
    std::cout << product << std::endl;

    double division{d/a};
    std::cout << division << std::endl;

    //double div_ints{a/a_whole_num};
    //std::cout << div_ints << std::endl;

    std::string str2 {"weather"};
    char letter{'o'};
    letter = str2[3];
    std::cout << letter << std::endl;
    
}
