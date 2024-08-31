#include<bits/stdc++.h>
using namespace std;

int main() {

    int minBuger = 2000;
    int minDrink = 2000;
    for(int i = 0; i < 3; i++) {
        int buger;
        cin >> buger;

        if(minBuger > buger) minBuger = buger;
    }

    for(int i = 0; i < 2; i++) {
        int drink;
        cin >> drink;

        if(minDrink > drink) minDrink = drink;
    }

    cout << minBuger + minDrink - 50;
    
    return 0;
}