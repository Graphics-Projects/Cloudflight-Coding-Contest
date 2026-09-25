#ifndef CCC_BUBBLESORT_HPP
#define CCC_BUBBLESORT_HPP

#include <pch.hpp>
template<typename T>
void BubbleSort(std::vector<T> A, T n)
{
    for(T i = 0; i <= n - 1; i++)
    {
        for(T j =  n; j >= i + 1; j--)
        {
            T aux;
            if(A[j] < A[j - 1])
            {
                aux = A[j];
                A[j] = A[j - 1];
                A[j - 1] = aux;
            }
        }
    }
}

#endif  
