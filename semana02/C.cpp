#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N];
    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for(int i = 0; i < N; ++i) {
        int x; cin >> x;
        arr[i] += x;
    }
    for(int i = 0; i < N; ++i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}