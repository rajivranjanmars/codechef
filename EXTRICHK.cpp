#include <iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, t=0;
    cin >> a >> b >> c;

    if (a <= c && b <= c){
        if (c < a + b)
        t=1;        
  }
    else if (a <= b && c <= b) {
        if (b < a + c)
         t=1;
    }
    else if (a >= b && a >= c){
        if (a < c + b)
         t=1; 
          }
   
   if (t==1){
      if(a==b&& a==c) 
      cout << 1;
      else if (a==b|| b==c || c==a)
      cout << 2;
      else
      cout <<3;
   }
   else
   cout << -1;
    return 0;
}