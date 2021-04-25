#include <iostream>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    if (b % 2 == 0)
        b--;
    for (int i = a / 2; i <= b / 2; i++){
        cout << 2 * i + 1 << " ";
    }
    return 0;
}