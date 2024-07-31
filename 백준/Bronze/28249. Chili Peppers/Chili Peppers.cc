#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int price = 0;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if(str == "Poblano") price += 1500;
        else if(str == "Mirasol") price += 6000;
        else if(str == "Serrano") price += 15500;
        else if(str == "Cayenne") price += 40000;
        else if(str == "Thai") price += 75000;
        else price += 125000;
    }

    cout << price << '\n';

    return 0;
}