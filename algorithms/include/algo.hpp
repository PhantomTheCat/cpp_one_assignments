#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"


long fibonacci(const int n)
{
    //Setting variables
    int output = 0;
    int prevNumber1 = 0;
    int prevNumber2 = 0;

    //Creating a for loop that will stop when we get to n
    for (int i = 0; i <= n; i++) 
    {
        //Incrementing output
        output = prevNumber1 + prevNumber2;

        //Iterating for next loop starting from the back, 
        // but not changing output till next loop
        prevNumber2 = prevNumber1;
        prevNumber1 = output;
    }

    return output;
}

int linear_search(Array * a, const int target)
{
    //Using for loop to search array
    for (size_t i = 0; i < a->len; i++) 
    {
        //Getting result for specific point and checking
        int result = a->data[i];
        if (result == target) 
        {
            return i;
        }
    }

    //Returning -1 if nothing is returned from array
    return -1;
}

long factorial(const int n)
{
    //Making an output that starts with our regular value (counts as the full one)
    int output = n;

    //Making an for loop going down the list, multiplying each one on
    for (size_t i = n; i > 0; i--) 
    {
        int nextNumber = i - 1;
        output = output * nextNumber;
    }

    return output;
}

#endif // ALGO_H_
