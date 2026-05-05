#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int N, C, somador = 0;
    int m, a;
    cin >> N >> C;
    
    vector<int> predio(N);
    vector<pair<int, int>> plano; // Matriz para  guardar e resgatar os dados das construções ===> pode não ser a melhor estrutura de dados
    
    // Preenchimento de alturas iniciais
    for(int i = 0; i<N; i++){
        cin >> predio[i]; // Leitura da altura inicial
    }
    
    
    
    // Guardando planos
    for (int i = 0; i<C; i++){
        cin >> m >> a;
        plano.push_back({m, a});
    }
    
    // Usando planos para atualizar predios
    for (auto x : plano){
        int i = x.first-1;
        
        for(i; i>=0; i--){
            predio[i] += x.second;
        }
        
    }
    
    // Realizando verificação do campo de visão (de cada um e já dando cout)
    for (int i = 0; i<N-1; i++){
        
        int visao = 1;
        
        if(predio[i] > predio[i-1]){
            visao++;
            int j = i-1;
            
            while(j>0 && predio[j] > predio[j-1]){
                j--;
                visao++;
            }
            
        }
        
        v.push_back(visao);
        
    }
    
    
    return 0;
}
