#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M;
    bool q1 = true, q2 = true;
    
    // Entrada
    
    cin >> N >> M;
    M++; // +1 ---> Overlay, pois o índice 0 não será usado
    vector<int>contagem(M, 0); 
    
    for (int i = 0; i<N; i++){
        int F;
        cin >> F;
        contagem[F]++;
    }
    
    // Processamento
    
    for(int i = 1; i<M; i++){
        
        if(contagem[i] > 1){
            q1 = false;
            break;
        } 
        
    }
    
    for(int i = 1; i<M; i++){
        if(contagem[i] == 0) {
            q2 = false;
            break;
        }
    }
    
    // Saída
    
    if(q1) cout << "Yes\n";
    else cout << "No\n";
    
    if(q2) cout << "Yes\n";
    else cout << "No\n";
    
    return 0;
}