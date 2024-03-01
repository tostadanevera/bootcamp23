#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int pA = 5, pT = 7, pN = 13;
    long long a, t, n; cin >> a >> t >> n;
    if (n > 0) { --n; } else if (t > 0) { --t; } else if (a > 0) { --a; }
    cout << a*pA + t*pT + n*pN << '\n';
    return 0;
}