#ifndef CCC_BUBBLESORT_HPP
#define CCC_BUBBLESORT_HPP

#include <pch.hpp>
#include <finding/Merge.hpp>
#include <cmath>
template<typename T>
void MergeSort(std::vector<T> A, T n, int p, int r)
{
    if(p >= r)
    {
        return;
    }
    int q = std::floor((p + r) / 2);
    MergeSort(A, p, q);
    MergeSort(A, q+1, r);
    Merge(A, p, q, r);
}

#endif  