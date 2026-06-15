#include <bits/stdc++.h>
using namespace std;

long long huge_fibonacci(int n, int m) {
    long long pre = 0, cur = 1;

    if(n == 0) return pre;
    if(n == 1) return cur;

    for (int i = 2; i <= n; i++){
        long long next = (pre + cur) % m;
        pre = cur;
        cur = next;
    }
    return cur;
}

int main() {
    int n;
    int m;
    cin >> n >> m;

    cout << huge_fibonacci(n,m);
}