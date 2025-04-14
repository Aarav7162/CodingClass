#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >>m;
	int final = (n - 1) / (m - 1);
	cout << n + final;
	return 0;
}
