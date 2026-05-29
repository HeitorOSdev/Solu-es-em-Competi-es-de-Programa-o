#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int X,Y,Z;
    bool yes = false;
    cin >> X >> Y >> Z;
    
    do{
        if (Y*Z == X) {
            yes = true;
            break;
        }
        X++;
        Y++;
    } while(Y*Z <= X);
    
    if (yes) cout << "Yes\n";
    else cout << "No\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}