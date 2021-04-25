#include <iostream>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        int t;
        if (i % 2 == 0)
        {
            t = 5 * i;
            for (int i = 0; i < 5; i++){
                t++;
                cout << t << " ";
            }
            cout << endl;
        }
        else{
            t = 5 * (i + 1);
            for (int i = 0; i < 5; i++){

                cout << t << " ";
                t--;
            }
            cout << endl;
        }
    }

    return 0;
}