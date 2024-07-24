#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<char> out;
    stack<int> s;

    int cnt = 1;
    for(int i = 0; i < n; i++) {

        int input;
        cin >> input;

        while(cnt <= input) {   
            s.push(cnt);
            cnt++;
            out.push_back('+');
        }
        if(s.top() == input) {
            s.pop();
            out.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < out.size(); i++) {
        cout << out[i] << '\n';
    }
    return 0;
}