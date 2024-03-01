#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, C; cin >> N >> C;
    if (N%C == 0) { cout << "YES" << '\n'; }
    else { cout << "NO" << '\n'; }
    return 0;
}