#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, student;
    cin >> k;

    int n = 1;
    int score;
    while(k--) {
        vector<int> v;
        cin >> student;
        for(int j = 0; j < student; j++) {
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());

        int Min = *min_element(v.begin(), v.end());
        int Max = *max_element(v.begin(), v.end());

        int gap = -1;
        for(int t = 0; t < student - 1; t++) {
            gap = max(gap, v[t + 1] - v[t]);
        }

        cout << "Class " << n << '\n';
        cout << "Max " << Max << ", Min " << Min << ", Largest gap " << gap << '\n';
        n++;
    }

    return 0;
}
