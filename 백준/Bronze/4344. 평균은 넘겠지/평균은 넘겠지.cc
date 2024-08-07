#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;

    while(c--) {
        int n;
        cin >> n;

        vector<int> v;

        double result = 0;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int score;
            cin >> score;
            v.push_back(score);
            sum += score;
        }

        int avg = sum / n;

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(avg < v[i]) cnt++;
        }

        result = (double)cnt / n * 100;
        cout << fixed;
        cout.precision(3);
        cout << result << '%' << '\n';
    }    

    return 0;
}