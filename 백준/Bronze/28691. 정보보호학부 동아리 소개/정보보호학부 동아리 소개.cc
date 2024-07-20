#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    if(str == "M") cout << "MatKor";
    if(str == "W") cout << "WiCys";
    if(str == "C") cout << "CyKor";
    if(str == "A") cout << "AlKor";
    if(str == "$") cout << "$clear";

    return 0;
}