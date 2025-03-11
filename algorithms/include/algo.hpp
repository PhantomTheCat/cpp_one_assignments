#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"
#include <iostream>
#include <string>


long fibonacci(const int n)
{
    //Setting variables
    int output = 0;
    int prevNumber1 = 1;
    int prevNumber2 = 0;

    //Accounting for the scenario where we get 1 or below, in that case, it's just the number
    if (n <= 1) {return n;}

    //Creating a for loop that will stop when we get to n
    //Starting at 1 as we have below 1 covered
    for (int i = 2; i <= n; i++) 
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
    //Getting a value to check, so we don't have to use size_t
    int index = 0;

    //Using for loop to search array
    for (size_t i = 0; i < a->len; i++) 
    {
        int result = a->data[i];
        if (result == target) 
        {
            return index;
        }
        index++;
    }

    //Returning -1 if nothing is returned from array
    return -1;
}

long factorial(const int n)
{
    //Making an output and index for tracking
    int output = n;
    int index = n;

    //Making a while loop that goes through the entire thing
    while (index > 1)
    {
        int nextNumber = index - 1;
        output = output * nextNumber;
        index--;
    }

    return output;
}

std::string fizz_buzz_checker(const int n) {
    if (n % 15 == 0) {
        return "fizzbuzz";
    } else if (n % 5 == 0) {
        return "buzz";
    } else if (n % 3 == 0) {
        return "fizz";
    }
    return "";
}

#endif // ALGO_H_
