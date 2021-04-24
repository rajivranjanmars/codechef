#include <iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, t;
    cin >> a >> b >> c;
    if (a >= b){
        t = a;
        a = b;
        b = t;
    }
    if (a<=c && b<=c)
        cout <<b;
     else if (a<=c && b>=c)
        cout <<c;
    else
        cout <<a;

    return 0;
}