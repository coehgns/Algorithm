#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool Comp(string a, string b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    else {
        return a < b;
    }
}

int main() {
  int n;
  string word[20001];
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> word[i];
  }
  sort(word, word + n, Comp);

  string check ="";
  for(int i = 0; i < n; i++) {
    if(check == word[i]) {
      continue;
    }
    cout << word[i] << "\n";
    check = word[i];
  }

  return 0;
}