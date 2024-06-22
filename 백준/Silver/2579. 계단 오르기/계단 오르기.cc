#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1,0);
    vector<int> stair(n+1,0);

    for(int i = 0; i < n; i++) 
        cin >> stair[i];

    dp[0] = stair[0];
    dp[1] = stair[0] + stair[1];

    for(int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);        
    }

    cout << dp[n - 1];

    return 0;
}