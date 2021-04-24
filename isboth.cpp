#include <iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short int a;
    cin >> a;
    if (a % 55 == 0)
        cout << "BOTH";
    else if (a % 5 ==0|| a % 11==0)
        cout << "ONE";
    else
        cout << "NONE";

            return 0;
}