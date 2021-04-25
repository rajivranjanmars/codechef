#include <iostream>
using namespace std;
int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);    

short a, b,c;
cin >> a >> b >> c;

if ( a>0 && b>0 && c >0 && a<180 && b<180 && c < 180){
    if (a+b+c==180)
       cout << "YES";
    else
    cout << "NO";   
}
 else
    cout << "NO";             
 return 0;
}