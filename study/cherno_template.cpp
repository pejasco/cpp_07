/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cherno_template.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <chuleung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:47:07 by chuleung          #+#    #+#             */
/*   Updated: 2024/08/20 23:32:01 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//template< class T> it can also be called class, but cherno suggest to use typename
// template<typename T> 
// void Print(T value)
// {
//     std::cout << value << "\n";
// }

template<typename T, int N>
class Array
{
    private:
        T m_Array[N];
    public:
        int GetSize() const {return N;}
};


int main()
{
    // Print(5);
    // Print("Hello");
    // Print(5.5f);

    Array<std::string, 16> array;
    std::cout << array.GetSize() << "\n";

    
}