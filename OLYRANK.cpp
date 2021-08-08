#include <iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >>t;
    while (t--){
        int g1,s1,b1,g2,s2,b2;
        cin >> g1 >>s1 >> b1 >> g2 >> s2 >> b2 ;
        if (g1+s1+b1 >b2+s2+g2)
        cout<< 1 <<endl;
        else
        cout<< 2 << endl;
    }
return 0;
}