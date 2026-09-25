#ifndef CCC_BUBBLESORT_HPP
#define CCC_BUBBLESORT_HPP

#include <pch.hpp>
template<typename T>
void InsertionSort(std::vector<T> A, T n)
{
    for(T i = 2; i <= n; i++)
    {
        T key = A[i];
        T j = i - 1;
        while(j > 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

#endif  
