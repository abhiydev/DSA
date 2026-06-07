#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Optimized solution O(n)
long long maxPairWiseProduct(int arr[], int sizeOfArray)
{
    long long current;
    long long max = 0;
    long long secondMax = 0;

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

    return max * secondMax;
}

// Brute force solution O(n²)
long long naiveMaxPairWiseProduct(int arr[], int sizeOfArray)
{
    long long maxProduct = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            long long product = (long long)arr[i] * arr[j];

            if (product > maxProduct)
            {
                maxProduct = product;
            }
        }
    }

    return maxProduct;
}

int main()
{
    srand(time(0));

    while (true)
    {
        // Random array size between 2 and 10
        int n = rand() % 9 + 2;

        int arr[n];

        // Generate random array values
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 1000;
        }

        // Run both solutions
        long long fastAnswer = maxPairWiseProduct(arr, n);
        long long naiveAnswer = naiveMaxPairWiseProduct(arr, n);

        // Compare results
        if (fastAnswer != naiveAnswer)
        {
            cout << "Wrong Answer Found!" << endl;

            cout << "Array size: " << n << endl;

            cout << "Array: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

            cout << "Fast Answer: " << fastAnswer << endl;
            cout << "Naive Answer: " << naiveAnswer << endl;

            break;
        }
        else
        {
            cout << "OK" << endl;
        }
    }

    return 0;
}