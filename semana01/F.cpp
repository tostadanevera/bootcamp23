#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int M = n % 60;
    int H = (n - M) / 60 + 12;
    if (H >= 24) { H %= 24; }

    if (H == 0 || H == 24) { cout << "00:"; } else if (H < 10) { cout << 0 << H << ':'; } else { cout << H << ':'; }
    if (M < 10) { cout << 0 << M << '\n'; } else { cout << M << '\n'; }
    return 0;
}