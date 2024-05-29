  #include <iostream>
  #include <vector>
  #include <algorithm>
  using namespace std;

  int main() {
    int n;
    vector<int> v;

    int sum = 0;
    for(int i = 0; i < 7; i++) {
      cin >> n;
      if(n % 2 != 0) {
        v.push_back(n);
        sum += n;
      }
    }

    sort(v.begin(), v.end());

    if(v.empty()) cout << -1;
    else cout << sum << "\n" << v[0];

    return 0;
  }