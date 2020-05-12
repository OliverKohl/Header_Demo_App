#include "main.hpp"
#include "increment_and_sum.hpp"

#include <iostream>
using namespace std;

void OuterFunction(int i)
{
    InnerFunction(i);
}

void InnerFunction (int i)
{
    cout << "The value of the integer is: " << i << endl;
}

int main()
{
    int a = 5;
    OuterFunction(a);

    vector<int> v{1, 2, 3, 4};
    int total = IncrementAndComputeVectorSum(v);
    cout << "The total is: " << total << endl;

    // G++ compiler tasks?
    // 1. PreProcessor z.B. #include
    // 2. jedes einzelne source wird in ein *.o verwandelt (object file)
    // 3. linking -> jedes einzelne *.o-File -> a.out file verwandelt
}