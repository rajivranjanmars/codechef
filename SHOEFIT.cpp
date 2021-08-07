#include <iostream>
using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin>>a >> b >> c;
        if ((a == 0 && (b == 1 || c == 1)) || (b == 0 && (a == 1 || c == 1)) || (c == 0 && (b == 1 || a == 1)))
        cout<< 1 <<endl;
        else
        cout << 0 << endl;
        
    }          
              
 return 0;
}