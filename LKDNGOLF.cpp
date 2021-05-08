#include <iostream>

using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int r = k;
        bool p = false;

        if (x % k == 0)
            p = true;

        r = n + 1;
        if ((((n + 1) - x) % k) == 0)
            p = true;

        if (p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}