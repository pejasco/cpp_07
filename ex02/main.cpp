/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scofield <Scofield@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:33:37 by chuleung          #+#    #+#             */
/*   Updated: 2024/08/22 10:51:39 by Scofield         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib> 
#include <iostream>
#include "Array.hpp"

struct S
{
    char c;
    int i;
    std::string s;
};

int main()
{

//     //###-Test0- empty array using the default###:
//     // Array<int> *test = new Array<int>();
//     // std::cout << test->size() << "\n"; 

//     //char test_c = 'a';
//     //int test_i = 42;
//     //std::string test_s = "dun worry be happy!";    

//     //###-Test1- empty array using the default###:
//     // Array<int> *test = new Array<int>();
//     // std::cout << test->size() << "\n"; 

//     //###-Test2- int_arry
//     Array<char> *test = new Array<char>(3);
//     for (int i = 0; i < 3; i++)
//         (*test)[i] = i + 97;
//     test->print((*test)[0]);
//     test->print((*test)[1]);
//     test->print((*test)[2]);
//     try
//     {
//         test_1->print((*test)[3]);
//     }
//     catch (const Array<char>::IndexOutOfBoundsException& e)
//     {
//         std::cerr << e.what() << "\n";
//     }
//     delete test;
//     return 0;
// }

// //###-Test3- string_arry
//     Array<std::string> *test = new Array<std::string>(3);
//     (*test)[0] =  "Dun Worry";
//     (*test)[1] =  "Be Happy";
//     (*test)[2] =  "^o^";

//     test->print((*test)[0]);
//     test->print((*test)[1]);
//     test->print((*test)[2]);
//     try
//     {
//         test->print((*test)[3]);
//     }
//     catch (const Array<std::string>::IndexOutOfBoundsException& e)
//     {
//         std::cerr << e.what() << "\n";
//     }
//     std::cout << "Number of element: " << test->size() << "\n";
//     delete test;
//     return 0;
// }

//###-Test4- struct_arry

    char test_c_0 = 'a';
    int test_i_0 = 0;
    std::string test_s_0 = "dun worry be happy!";
    S test_struct_0;

    char test_c_1 = 'b';
    int test_i_1 = 1;
    std::string test_s_1 = "take it easy!";
    S test_struct_1;

    char test_c_2 = 'a';
    int test_i_2 = 42;
    std::string test_s_2 = "hakula mutata!";
    S test_struct_2;

    test_struct_0.c = test_c_0;
    test_struct_0.i = test_i_0;
    test_struct_0.s = test_s_0;
    test_struct_1.c = test_c_1;
    test_struct_1.i = test_i_1;
    test_struct_1.s = test_s_1;
    test_struct_2.c = test_c_2;
    test_struct_2.i = test_i_2;
    test_struct_2.s = test_s_2;


    Array<S> *test = new Array<S>(3);
    (*test)[0] =  test_struct_0;
    (*test)[1] =  test_struct_1;
    (*test)[2] =  test_struct_2;

    std::cout << (*test)[0].c << "\n";
    std::cout << (*test)[1].i << "\n";
    std::cout << (*test)[2].s << "\n";

    try
    {
        std::cout << (*test)[3].s << "\n";
    }
    catch (const Array<S>::IndexOutOfBoundsException& e)
    {
        std::cerr << e.what() << "\n";
    }
    delete test;
    return 0;
}















// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     Array<int> tmp = numbers;
//     Array<int> test(tmp);

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (tmp[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (tmp[i] != test[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }

//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

