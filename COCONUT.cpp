#include <iostream>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        cout << Xa / xa + Xb / xb << endl;
    }

    return 0;
}