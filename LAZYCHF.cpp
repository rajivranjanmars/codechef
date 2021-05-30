#include <iostream>
using namespace std;
int main(){                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);                             
    int t;
    cin >> t; 
    while (t--){
       int x,m,d;
       cin >> x >> m >> d;
       if (x*m<=x+d)
       cout<< x*m<<endl;
       else
       cout<< x+d<<endl;  
    }            
 return 0;
}