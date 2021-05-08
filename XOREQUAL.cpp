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
        int n;
        cin >> n;
        unsigned long long s = 1;
        // no. of even number = number/2
        for (int j = n; j > 1;)
        {

            if (j / 10000 > 1)
            {
                s = (s * 905611805) % 1000000007;
                j -= 10000;
            }
            else if (j / 1000 > 1)
            {
                s = (s * 688423210) % 1000000007;
                j -= 1000;
            }
            else if (j / 100 > 1)
            {
                s = (s * 976371285) % 1000000007;
                j -= 100;
            }
            else if (j / 10 > 1)
            {

                s = (s * 1024) % 1000000007;

                j -= 10;
            }
            else
            {
                s = (s * 2) % 1000000007;
                j--;
            }
        }
        cout << s << endl;
    }
    return 0;
}