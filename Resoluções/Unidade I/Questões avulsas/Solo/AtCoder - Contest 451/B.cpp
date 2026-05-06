// AtCoder ABC451 - Questão B - Personnel Change - 10.04.2026
// Link: https://atcoder.jp/contests/abc451/tasks
// Heitor

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    // Entrada + Processamento
    int N, M;
    cin >> N >> M;
    
    vector<int> v(M);
    
    for(int i = 0; i<N; i++){
        
        int A, B;
        cin >> A >> B;
        
        v[A-1]--;
        v[B-1]++;
        
    }
    
    // Saída
    for(auto x : v){
        cout << x << "\n";
    }
    
    return 0;
}