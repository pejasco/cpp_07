/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:33:37 by chuleung          #+#    #+#             */
/*   Updated: 2024/08/21 23:17:06 by chuleung         ###   ########.fr       */
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

// int main()
// {

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
//     Array<char> *test_1 = new Array<char>(3);
//     for (int i = 0; i < 3; i++)
//         test_1[i] = i + 97;
    
    





// }
















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

