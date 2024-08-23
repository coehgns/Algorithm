#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int start, int work, int target);

int main() {
    int n;
    cin >> n;

    string a = to_string(pow(2, n));
    int x = a.find('.');
    a = a.substr(0, x);
    a[a.length() - 1] -= 1;
    cout << a << "\n";
    
    if(n <= 20) {
        hanoi(n, 1, 2, 3);
    }

    return 0;
}

void hanoi(int n, int start, int work, int target) {
    if(n == 1) {
        cout << start << " " << target << "\n";
    }
    
    else {
        hanoi(n - 1, start, target, work);
        cout << start << " " << target << "\n";
        hanoi(n - 1, work, start, target);
    }
}