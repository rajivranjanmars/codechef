#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    
     int t;
     cin >> t;
     while (t--)
    {
        
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    { //initialization of 'a' vector
    int value;
    cin>>value;
        a.push_back(value);
    }
    for (int i = 0; i < n; i++)
    { //initialization of 'b' vector
         int value;
    cin>>value;
        b.push_back(value);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
   
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=a[i] * b[i];
    }
    cout<<sum << endl;
    }
    return 0;
}