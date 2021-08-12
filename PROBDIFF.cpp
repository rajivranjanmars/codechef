#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v;
        v.push_back(a);
        if (a != b)
            v.push_back(b);
        if (a != c && b != c)
            v.push_back(c);
        if (a != d && b != d && c != d)
            v.push_back(d);
        if (v.size() == 1)
                    cout
             << 0 << endl;
        else if (v.size() == 2){
            int m=1;
            if (a==b )
            m++;
            if (a==c)
            m++;
            if (a==d)
            m++;
            if (m==2)
            cout<<2 << endl;
            else
            cout <<1 << endl;
        }
        else if (v.size() == 3)
            cout << 2 << endl;
        else if (v.size() == 4)
            cout << 2 << endl;
    }
    return 0;
}