#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    string S;
    int N;
    
    cin >> S >> N;
    
    
    
    S.erase(0,N);
    S.erase(S.length()-N,N);
    
    
    
    
    
    cout << S << "\n";
    
    
    
    
    
    return 0;
}