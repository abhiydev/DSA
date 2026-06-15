#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n) {

    long long pre = 0, cur = 1;

    if(n == 0) return pre;
    if(n == 1) return cur;

    for ( int i = 2; i <= n; i++) {
        long long next = pre + cur;
        pre = cur;
        cur = next;
    }

    return cur;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
    return 0;
}