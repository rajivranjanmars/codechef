#include <iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int b = 0;
    int c[a];
    for (int i = a; i >= 1; i--)
    {
        if (a % i == 0)
        {
            c[b] = i;
            b++;
        }
    }
    cout << b << endl;
    for (int i = b-1; i >= 0; i--)
    {
        cout << c[i] << " ";
    }

    return 0;
}