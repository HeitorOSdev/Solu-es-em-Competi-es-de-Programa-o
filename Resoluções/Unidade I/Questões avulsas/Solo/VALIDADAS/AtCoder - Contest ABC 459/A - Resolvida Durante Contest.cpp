#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    string S = "HelloWorld";
    int X;
    cin >> X;
    
    S.erase(X-1, 1);
    
    cout << S << "\n";

    return 0;
}