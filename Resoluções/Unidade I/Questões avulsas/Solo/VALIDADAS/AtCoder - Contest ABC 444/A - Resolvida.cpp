#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, a, b, c;
    cin >> N;
    
    a = N/100;
    b = (N-a*100)/10;
    c = N-a*100-b*10;
    
    if(a == b && b == c) cout << "Yes\n";
    else cout << "No\n";
    
    
    
    
    
    

    return 0;
}