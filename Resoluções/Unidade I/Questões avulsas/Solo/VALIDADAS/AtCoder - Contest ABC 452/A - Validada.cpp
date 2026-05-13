// AtCoder ABC452 - Questão A - Gothec - 16.04.2026
// Link: https://atcoder.jp/contests/abc452/tasks
// Heitor

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int M, D;
    bool passou = false;
    
    cin >> M >> D;
    
    switch (M){
        case 1:
            if (D == 7) cout << "Yes\n";
            else cout << "No\n";
            break;
        
        case 3:
            if (D == 3) cout << "Yes\n";
            else cout << "No\n";
            break;
        
        case 5:
            if (D == 5) cout << "Yes\n";
            else cout << "No\n";
            break;
        
        case 7:
            if (D == 7) cout << "Yes\n";
            else cout << "No\n";
            break;
        
        case 9:
            if (D == 9) cout << "Yes\n";
            else cout << "No\n";
            break;
        
        default:
            cout << "No\n";
    }

    return 0;
}


