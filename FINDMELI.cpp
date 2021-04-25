#include <iostream>

using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int i;
    for ( i = 0; i < a; i++){
        int t;
        cin >> t;
        if (t == b){
            cout << 1;
            break;
        }      
    }
    if (i == a)
        cout << -1;

    return 0;
}