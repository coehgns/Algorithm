#include <bits/stdc++.h>
using namespace std; 

bool compare(pair<int, int> a, pair<int, int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }else{
        return a.second<b.second;
    }
}

int main() {

    int n;
    cin >> n;

    vector<pair<int , int>> v;

    int x, y;
    while(n--) {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size() ; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}