#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    vector<pair<int, int>> v(N+1); // .first = tempo .second=cavalo;
    
    for(int i=1; i<=N; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    
    sort(v.begin(), v.end());
    
    for(int i=1; i<=3; i++){
        cout << v[i].second << " ";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}