#include <iostream>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int max;
        cin >> max;
        int car = 1;
        for (int i = 0; i < n - 1; i++){
            int s;
            cin >> s;
            if (s < max){
                car++;
                max = s;
            }
        }
        cout << car << endl;
    }
    return 0;
}