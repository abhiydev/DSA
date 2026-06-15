#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long pre = 0, cur = 1;
    long long sum = 1; // Start with the sum of the first two Fibonacci numbers

    for (int i = 2; i <= n; i++){
        long long next = ( pre + cur ) % 10; // Keep only the last digit
        pre = cur;
        cur = next;
        sum += cur;
    }
    return sum % 10; // Return the last digit of the sum
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}