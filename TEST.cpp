#include <iostream>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short x;
    while (cin >> x){
        if (x == 42)
        break;
        cout << x << endl;
    }

    return 0;
}