#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t,n,x1,x2,k;
    
    cin >> t;
    
    for (int i=0; i<t; i++){
        cin >> n >> x1 >> x2 >> k;
        
        int diff = min(abs(x1-x2), x1-x2+n+1);
        
        cout << diff + k << "\n";
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}