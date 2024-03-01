#include <bits/stdc++.h>

using namespace std;

long long solve(long long N) {
    if (N == 1) return 1;
    return solve(N - 1) + N;
}

int main() {
    long long N; cin >> N;
    cout << (N*(N+1))/ 2 << '\n';
}