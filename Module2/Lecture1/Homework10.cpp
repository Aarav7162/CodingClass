#include <iostream>
using namespace std;

void solve_case(long long n) {
    if (n < 4 or n % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    long long max_buses = n / 4;

    long long min_buses = -1;
    for (long long b = 0; b <= n / 6; ++b) {
        long long remaining = n - b * 6;
        if (remaining % 4 == 0) {
            min_buses = b + remaining / 4;
            break;
        }
    }

    if (min_buses == -1) {
        cout << -1 << endl;
    } else {
        cout << min_buses << " " << max_buses << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        solve_case(n);
    }
    return 0;
}
