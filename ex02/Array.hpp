/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scofield <Scofield@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:17 by chuleung          #+#    #+#             */
/*   Updated: 2024/08/22 10:49:00 by Scofield         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
    public:
        //Canonical Form
        Array();
        Array(unsigned int size);
        ~Array();
        Array(const Array &other);
        Array& operator=(const Array& other);

        T&       operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        class IndexOutOfBoundsException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Exception: Index out of Bounds";
                }
        };

        unsigned int size() const;
        void print(T&);

    private:
        T *array_;
        unsigned int size_;
};

template <typename T>
Array<T>::Array() : array_(NULL), size_(0)
{
    std::cout << "[Array] Array constructor is called.\n";
}

template <typename T>
Array<T>::Array(unsigned int size) : array_(new T[size]()), size_(size)
{
    std::cout << "[Array] Array constructor is called.\n";
}

template <typename T>
Array<T>::Array(const Array &other) : array_(new T[other.size_]), size_(other.size_)
{
    for (unsigned int i = 0; i < size_; ++i)
        array_[i] = other.array_[i];
    std::cout << "[Array] Array copy constructor is called.\n";
}

template <typename T>
Array<T>& Array<T>::operator =(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] array_;
        size_ = other.size_;
        array_ = new T[size_];
        for (unsigned int i = 0; i < size_; ++i)
            array_[i] = other.array_[i];
    }
    std::cout << "[Array] Assignment operator is called.\n";
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array_;
    std::cout << "[Array] Array destructor is called.\n";
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= size_ || array_ == NULL)
    {
        std::cout << "index: " << index << std::endl;
        throw Array<T>::IndexOutOfBoundsException();
    }
    return (this->array_[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= size_ || array_ == NULL)
    {
        std::cout << "index: " << index << std::endl;
        throw Array<T>::IndexOutOfBoundsException();
    }
    return (this->array_[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return size_;    
}

template <typename T>
void Array<T>::print(T& type)
{
    std::cout << type << "\n";
}

#endif