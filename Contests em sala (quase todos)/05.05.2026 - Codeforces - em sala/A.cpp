#include<bits/stdc++.h>
using namespace std;
int main (){
    
    ios::sync_with_stdio(0);cin.tie(0);
    
    long long N, C;
    long long m, a;
    cin >> N >> C;
    
    vector<long long> predio(N);
    vector<pair<long long, long long>> plano; // Vetor de pares para  guardar e resgatar os dados das construções ===> pode não ser a melhor estrutura de dados
    
    // Preenchimento de alturas iniciais
    for(int i = 0; i<N; i++){
        cin >> predio[i]; // Leitura da altura inicial
    }
    
    
    // Moda antiga:
    // // Guardando planos
    // for (int i = 0; i<C; i++){
    //     cin >> m >> a;
        
    //     plano.push_back({m,a});
        
    // }
    
    // // Usando planos para atualizar prédios
    // for (auto x : plano){
    //     int i = x.first-1;
        
    //     for(i; i>=0; i--){
    //         predio[i] += x.second;
    //     }
        
    // }
    
    
    
    // Modo atual: Vetor de diferenças
    vector<long long> diff(N + 1, 0); 
    for (int i = 0; i < C; i++){
        long long m, a;
        cin >> m >> a;
        diff[0] += a;
        diff[m] -= a;
    }
    
    long long soma_atual = 0;
    for (int i = 0; i < N; i++){
        soma_atual += diff[i];
        predio[i] += soma_atual;
    }
    
    
    
    
    // cout << "\n\n----------ARRAY DE PREDIO----------\n";
    // for(auto x : predio){
    //     cout << x << "\n";
    // }
    
    
    // cout << "\n\n----------VISÃO----------\n";
    
    
    stack<long long> pilha;
    
    pilha.push(predio[0]);
    
    for (long long i = 1; i<N; i++){
        
        cout << pilha.size() << "\n";
        
        while(!pilha.empty() && pilha.top() <= predio[i]){
            pilha.pop();
        }
        
        pilha.push(predio[i]);
        
    }
    
    
    
    
    
    return 0;
}