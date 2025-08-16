#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < answers.size(); i++) {
        if(one[i % one.size()] == answers[i]) cnt1++;
        if(two[i % two.size()] == answers[i]) cnt2++;
        if(three[i % three.size()] == answers[i]) cnt3++;
    }
    
    vector<int> answer = {cnt1, cnt2, cnt3};
    vector<int> result;
    
    int maxResult = max({cnt1, cnt2, cnt3});
    
    if(answer[0] == maxResult) result.push_back(1);
    if(answer[1] == maxResult) result.push_back(2);
    if(answer[2] == maxResult) result.push_back(3);
    
    return result;
}