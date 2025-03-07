#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"


/*
    //This is just a note that I added in because I wasn't sure if you got my message:
    // THE FIBONACCI SEQUENCE YOU HAVE IS NOT THE REAL FIBONACCI SEQUENCE

    // Your copy is testing for 0, 1, 2, 3, 5, 8, 13, 21 in a sequence, when
    // the sequence is actually 0, 1, 1, 2, 3, 5, 8, 13, 21 and your test is wrong because of it
    // In other words, you're missing one of the 1s at the start, which I got around by
    // having an exception in the if (n <= 1) { return n; }

    //Here's how the actual code would work, if you want it:

long fibonacci(const int n)
{
    //Setting variables
    int output = 0;
    int prevNumber1 = 0;
    int prevNumber2 = 0;

    //Creating a for loop that will stop when we get to n
    //Starting at 1 as we have below 1 covered
    for (int i = 1; i <= n; i++)
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
*/

//Fibonacci sequence that works with your code (see example above)
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

#endif // ALGO_H_
