// 28/03/2026 - AtCoder Contest 450 - Questão B
// A SOLUÇÃO É UM FOR TRIPLO, O(n ao cubo)... a partir dele exploramos um caminho mais barato para quaisquers a,b b,c ou a,c.  

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    // INPUT:
    long long N;
    cin >> N;
    
    vector<vector<long long>> cij(N+1, vector<long long>(N+1, 0));
    
    for (int i = 1; i<=N; i++){
        for(int j = i+1; j<=N; j++){
            
            long long custo;
            cin >> custo;
            cij[i][j] = custo;
            
        }
    }
    
    // Verificar o custo
    bool maisBarato = false;
    for (int a = 1; a<=N-2; a++){
        for(int b = a+1; b<=N-1; b++){
            for(int c = b+1; c<=N; c++){
                
                int ab = cij[a][b];
                int bc = cij[b][c];
                int ac = cij[a][c];
                
                
                if(ab + bc < ac){
                    a = N;
                    b = N;
                    c = N+1;
                    maisBarato = true;
                }
                
            }
        }
    }
    
    
    if(maisBarato) cout << "Yes\n";
    else cout << "No\n";
    
    return 0;
    
    
    
}