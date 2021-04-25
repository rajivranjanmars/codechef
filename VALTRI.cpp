#include <iostream>

using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               

    int a;
    cin >> a;
    if (a%5==0|| a%6==0)
    cout << "YES";
    else
    cout << "NO";
 return 0;
}