#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    long long sum = 0;
    while(cin >> num) {
        sum = (long long) sum + num;
        cout << sum << ' ';
    }
    cout << '\n';
    return 0;
}