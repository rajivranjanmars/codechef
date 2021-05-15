#include <iostream>
using namespace std;
int main(){               
   ios_base::sync_with_stdio(false);
cin.tie(NULL);  

int t;
cin >> t;

for (int i = 0; i < t; i++){          
     char a[3][3],u='_';
     int x=0,o=0;
      bool s=false;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
               cin >> a[i][j];
                    if (a[i][j]=='X')
                    x++;
                    if (a[i][j]=='O')
                    o++;
                    if (a[i][j]=='_')
                    s=true;      
            }           
        }      
        if (o>x || x-o>1 )
         cout << 3 <<endl;
         else {
            int wo = 0,wx=0;
            for (int i = 0; i < 3; i++){
               if ((a[i][0]==a[i][1])&&(a[i][0]==a[i][2])){
                  if(a[i][0]=='O')
                  wo++;
                  if(a[i][0]=='X')
                  wx++;
               }  
            }         
            for (int i = 0; i < 3; i++){   
               if ((a[0][i]==a[1][i])&&(a[0][i]==a[2][i])){
                  if(a[0][i]=='O')
                  wo++;
                  if(a[0][i]=='X')
                  wx++;
               } 
            }
            if ((a[0][0]==a[1][1])&&(a[0][0]==a[2][2] )){
                  if(a[0][0]=='O')
                  wo++;
                  if(a[0][0]=='X')
                  wx++;
               }
               if((a[0][2]==a[1][1])&&(a[0][2]==a[2][0])){
                  if(a[2][0]=='O')
                  wo++;
                  if(a[2][0]=='X')
                  wx++;
               }              
              if ((wo>0 )&&(wx>0))
              cout <<3 <<endl;
              else{
                  if(wo==1 && x==o)
                  cout<< 1 <<endl;
                  else if ( (wx>0)&& x==o+1)
                  cout<<1 << endl;
                  else if ((wo==0 )&&( wx==0)&& !s)
                  cout << 1 <<endl; 
                  else if ((wo==0 )&&( wx==0)&& s)
                  cout << 2 <<endl; 
                  else
                  cout << 3 << endl;                
              }             
         }
   }
 return 0;
}