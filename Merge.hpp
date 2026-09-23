#ifndef CCC_BUBBLESORT_HPP
#define CCC_BUBBLESORT_HPP

#include <pch.hpp>
template<typename T>
void Merge(std::vector<T> A, int p, int q, int r)
{
    int n_L = q - p + 1;
    int n_R = r - q;
    std::vector<T> L(n_L - 1);
    std::vector<T> R(n_R - 1);
    for (T i = 0; i <= n_L - 1; i++)
    {
        L[i] = A[p+i];
    }
    for (T j = 0; j <= n_R - 1; j++)
    {
        R[j] = A[q + j + 1];
    }
    int i = 0; 
    int j = 0;
    int k = p;

    while(i < n_L && j < n_R)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n_L)
    {
        A[k] = L[i];
        i++; k++;
    }
    while( j < n_R)
    {
        A[k] = R[j];
        j++; k++;
    }
}

#endif  