#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool all_less_equal = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] > d) {
            all_less_equal = false;
            break;
        }
    }

    if (all_less_equal) {
        cout << "YES" << endl;
        return;
    }

    sort(a.begin(), a.end());

    if (a[0] + a[1] <= d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
