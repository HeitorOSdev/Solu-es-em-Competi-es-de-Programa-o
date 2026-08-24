// Vale a pena tentar resolver usando prefixo de soma, depois.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // (A->B ... B->A)
vector<int> listaCores;
set<pair<int, int>> colisoesSet;

int colorir(int N){

    listaCores[1] = 1;
    int colisoes = 0;
    for(int i = 1; i<=N; i++){

        bool cor = listaCores[i];
        int qVizinhos = adj[i].size();

        for(int j = 0; j<qVizinhos; j++){

            int noVizinho = adj[i][j];
            bool corVizinho = listaCores[noVizinho];
            if(corVizinho == 0){
                if(cor == 1) listaCores[noVizinho] = 2;
                else listaCores[noVizinho] = 1;
            }else{
                if(cor == corVizinho) {
                    colisoes++;
                    break;
                }
                else continue;
            }
        }
    }
    return colisoes;
}





int main (){

    // ios::sync_with_stdio(0); cin.tie(0);

    // INPUT
    int N, M, colisoes = 0, result = 0;
    cin >> N >> M;
    adj.resize(N+1); // (A->B ... B->A) - Zero é overlay
    listaCores.resize(N+1, 0);

    for(int i=0; i<M; i++){
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    // PROCESS

    colisoes = colorir(N);

    while(colisoes){
        
    }




    // OUTPUT
    cout << result-M << "\n";












    return 0;
}