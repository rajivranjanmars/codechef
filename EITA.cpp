#include <iostream>
#include <algorithm>

using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
    int t;
    cin >>t;
    while (t--)
    {
        int d,x,y,z;
        cin >> d >> x >> y >> z ;
        cout << max(7*x,(y*d+(7-d)*z) ) << endl;
    }
 
 return 0;
}