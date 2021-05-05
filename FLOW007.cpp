#include <iostream>
#include <algorithm>

using namespace std;
int main(){
                 
ios_base::sync_with_stdio(false);
cin.tie(NULL);               
  int t;
  cin  >> t;

  while(t>0){
     string s;
     cin>>s;
     reverse(s.begin(), s.end());
    int n=atoi(s.c_str());
     cout << n << endl;
     t--;
  }             
 return 0;
}

/* 

      stringstream n(s);
     int o;
     n>>o;
     cout <<o << endl;
     t--;
*/