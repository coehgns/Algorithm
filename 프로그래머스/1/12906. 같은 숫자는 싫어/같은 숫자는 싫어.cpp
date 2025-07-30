#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    queue<int> q;
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++) {
        if(q.empty()) q.push(arr[i]);
        else {
            if(q.back() == arr[i]) continue;
            else q.push(arr[i]);
        }
    }
    
    int length = q.size();
    
    for(int i = 0; i < length; i++) {
        answer.push_back(q.front());
        q.pop();
    }

    return answer;
}