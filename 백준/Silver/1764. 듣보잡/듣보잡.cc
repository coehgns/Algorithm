#include <iostream>
#include <set>
using namespace std;

int main() {
  int n, m;
  set<string> names;
  set<string> result;
  string name;
  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> name;
    names.insert(name);
  }
  
  int cnt = 0;
  for(int i = 0; i < m; i++) {
    cin >> name;
    if(names.find(name) != names.end()) {
      result.insert(name);
      cnt++;
    }
  }

  cout << cnt << endl;
  
  for(set<string>::iterator it = result.begin(); it!= result.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}