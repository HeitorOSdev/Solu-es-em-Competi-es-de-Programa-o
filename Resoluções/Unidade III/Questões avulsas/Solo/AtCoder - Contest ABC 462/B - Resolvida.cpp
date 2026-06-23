#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    
    vector<vector<int>> vetor(N+1);
    
    for(int i = 1; i<=N; i++){ // i = pessoa
        
        int k;
        cin >> k;
        
        for(int j = 0; j<k; j++){
            
            int alvo;
            cin >> alvo;
            vetor[alvo].push_back(i);
            
        }
        
        
    }
    
    
    
    
    // leitura1 = numeroASerIncluso
    // leitura2 = alvoDoPresente
    
    // vetores[alvoDoPresente].push_back(numeroASerIncluso);
    
    for(int i=1; i<=N; i++){
        
        int qPresentes = vetor[i].size();
        cout << qPresentes << " ";
        
        for(int j = 0; j<qPresentes; j++){
            cout << vetor[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
