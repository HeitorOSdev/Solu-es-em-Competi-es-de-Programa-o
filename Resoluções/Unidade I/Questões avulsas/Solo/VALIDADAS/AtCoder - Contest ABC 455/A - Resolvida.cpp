#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int A,B,C;
    
    cin >> A >> B >> C;
    
    if(A != B && B==C){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    
    return 0;
}