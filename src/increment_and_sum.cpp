#include "vect_add_one.hpp"

int IncrementAndComputeVectorSum(vector<int> v)
{
    int total = 0;
    AddOneToEach(v);

    for (auto i : v)
    {
        total += 1;
    }
    return total;
}