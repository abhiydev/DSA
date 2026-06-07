#include <iostream>
#include <chrono>
using namespace std;


long long maxPairWiseProduct(int arr[], int sizeOfArray)
{
    // initialise current, max and second max
    long long current = arr[0];
    long long max = 0;
    long long secondMax = 0;

    // iterate through the array and find the max and second max

    for (int i = 0; i < sizeOfArray; i++)
    {
        current = arr[i];
        if (current > max)
        {
            secondMax = max;
            max = current;
        }
        else if (current > secondMax)
        {
            secondMax = current;
        }
    }
    // find product of max and second max
    long long product = max * secondMax;
    return product;
}

int main(void)
{
    //  create an array from user input

    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }


    // find the max pairwise product
    long long product = maxPairWiseProduct(arr, sizeOfArray);

    // print the product
    cout << product;

    return 0;
}