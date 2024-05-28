  #include <iostream>
  using namespace std;

  int main() {
    int t;
    cin >> t;
    string ox;

    int score = 1, result = 0;
    for(int i = 0; i < t; i++) {
      cin >> ox;
        
      score = 1; 
      result = 0;
        
      for(int j = 0; j < ox.length(); j++) {
        if(ox[j] == 'O') result += score++;
        else score = 1;
      }
      cout << result << "\n";
    }

    return 0;
  }