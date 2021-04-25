#include <iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, t;
    cin >> a >> b >> c;

    if (a <= c && b <= c){
        if (c < a + b){
            cout << "YES";
        }
         else
        cout << "NO";

  }
    else if (a <= b && b >= c) {
        if (b < a + c)
        {
            cout << "YES";
        }
         else
        cout << "NO";

    }
    else if (a >= b && a >= c){
        if (a < c + b)
        {
            cout << "YES";
        }
         else
        cout << "NO";

    }
   
    return 0;
}