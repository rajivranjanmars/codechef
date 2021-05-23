#include <iostream>

using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
              
  int t;
  cin >> t;
  while(t--){
      float d,D,a,b,c;
      cin >> D >> d >> a >> b >> c ;
      if(d*D>=42)
      cout << c<< endl;
      else if(d*D>=21)
      cout << b<< endl;
      else if(d*D>=10)
      cout << a<< endl;
      else
      cout<< 0 << endl;
  }                        
 return 0;
}