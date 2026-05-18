#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    
    int N, X;
    
    cin >> N;
    vector<int> v(N);
    
    for(int i = 0;i<N;i++){
        cin >> v[i];
    }
    
    cin >> X;
    
    cout << v[X-1] << "\n";
    
    
    

    return 0;
}