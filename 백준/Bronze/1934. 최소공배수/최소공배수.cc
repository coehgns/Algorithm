#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a,b);
}

int main() {
    int t;
    cin >> t;

    int a, b;
    while (t--) {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }

    return 0;
}
