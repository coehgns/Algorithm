#include <bits/stdc++.h>
using namespace std;

int main() {
    string subject, rating;
    double score;

    unordered_map<string, double> m = {
        {"A+", 4.5},
        {"A0", 4.0},
        {"B+", 3.5},
        {"B0", 3.0},
        {"C+", 2.5},
        {"C0", 2.0},
        {"D+", 1.5},
        {"D0", 1.0},
        {"F", 0.0}
    };

    double sum = 0;
    double totalScore = 0;
    for(int i = 0; i < 20; i++) {
        cin >> subject >> score >> rating;

        if(rating == "P") continue;

        totalScore += score * m[rating];
        sum += score;
    }

    double result = totalScore / sum;

    cout << fixed;
    cout.precision(6);
    cout << result;
    
    return 0;
}