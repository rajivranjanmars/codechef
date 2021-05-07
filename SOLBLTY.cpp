#include <iostream>

using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
   int t;
   cin >> t;
   for(int i = 0; i < t; i++){
       int x,a ,b;
       cin >> x >> a >> b;
       cout<< 10*(a+b*(100-x))<< endl;
   }           
              
 return 0;
}