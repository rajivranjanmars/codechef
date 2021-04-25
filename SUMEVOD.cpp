#include <iostream>

using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    cin >> a;
    cout << a * a << " " << a * (a + 1);

    return 0;
}