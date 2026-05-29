#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int N,M;
    cin >> N >> M;
    
    vector<pair<double,double>> birdsSum(M+1, pair<double,double>(0,0));
    
    for(int i=1; i<=N; i++){
        
        double tipo, size;
        cin >> tipo >> size;
        birdsSum[tipo].first++;
        birdsSum[tipo].second += size;
        
    }
    
    for(int i=1; i<=M; i++){
        cout << setprecision(15) << birdsSum[i].second/birdsSum[i].first << "\n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}