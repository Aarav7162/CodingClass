#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    int temp;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b) {
            cout << "0 0" << endl;
        }
        else {
            temp = abs(a-b);
            int moves = min(a % temp, temp - (a % temp));
            cout << temp << " " << moves << endl;
        }
    }
    
    return 0;
}
