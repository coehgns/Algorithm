#include <iostream>
using namespace std;

bool hansoo(int a){
    
    if(a < 100) return true;
    int a3 = a / 100;
    int a1 = a % 10;
    int a2 = a % 100 / 10;
    if(a3-a2 == a2-a1) return true;
    return false;
    
}
int main(void){
    int n, cnt = 0;
    cin >> n;
    for(int i =1; i <= n; i++){
        if(hansoo(i))
            cnt++;
        }
    cout << cnt;
}