#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;

    while (true) {
        getline(cin, str);  // 사용자로부터 한 줄의 입력을 읽어옴
        if (str == "END")  // 입력된 줄이 "END"인지 확인
            break;         // "END"인 경우, 반복문 종료
        reverse(str.begin(), str.end());  // 문자열을 뒤집음
        cout << str << '\n';  // 뒤집은 문자열을 출력
    }

    return 0;
}
