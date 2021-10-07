#include <bits/stdc++.h>
using namespace std;

bool b[400005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        b[x] = true;
    }
    for (int i = 0; i <= n; i++) {
        if (!b[i]) {cout << i; return 0;}
    }
}
