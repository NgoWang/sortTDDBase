/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"2
namespace
{
    void swap(int &n1, int &n2)
    {
        int t = n1;
        n1 = n2;
        n2 = t;
    }
    
    void order(int &n1, int &n2)
    {
        if(n1 > n2)
            swap(n1, n2);
    }
}
void sort(std::vector<int> &v)
{
    if(v.size() < 2)
        return;
    order(v[0], v[1]);
}
