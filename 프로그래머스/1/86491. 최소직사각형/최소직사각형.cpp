#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> w;
    vector<int> h;
    
    int maxW = 0, maxH = 0;
    for(int i = 0; i < sizes.size(); i++) {
        int w = max(sizes[i][0], sizes[i][1]);
        int h = min(sizes[i][0], sizes[i][1]);
        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    
    return maxW * maxH;
}