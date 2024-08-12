#include <bits/stdc++.h>
using namespace std; 

int main() {
    string str;
    for(int i = 1; ; i++) {
        getline(cin, str);
        if(str == "0") break;
        cout << "Case " << i << ": Sorting... done!" << "\n";
    }

    return 0;
}