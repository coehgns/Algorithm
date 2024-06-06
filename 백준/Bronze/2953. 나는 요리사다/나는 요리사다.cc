#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int score;

    int sum = 0, max = 0, cooknum = 0;
    for(int i = 1; i <= 5; i++) {
        sum = 0;
        for(int j = 0; j < 4; j++) {
            cin >> score;
            sum += score;
            if(max < sum) {
                max = sum;
                cooknum = i;
            }
        }
    }
    cout << cooknum << " " << max;

    return 0;
}