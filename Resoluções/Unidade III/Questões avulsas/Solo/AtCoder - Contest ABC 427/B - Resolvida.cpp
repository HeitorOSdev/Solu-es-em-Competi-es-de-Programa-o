// Vale a pena tentar resolver usando prefixo de soma, depois.

#include<bits/stdc++.h>
using namespace std;
int main (){

    // ios::sync_with_stdio(0); cin.tie(0);

    // INPUT
    int N;
    cin >> N;

    // PROCESS
    vector<int> vetor(N+1);
    vetor[1] = 1;
    for(int i = 2; i<=N; i++){
        int somatorioAtual = vetor[i-1];
        int novoValor = 0;

        do{
            novoValor += somatorioAtual%10;
            somatorioAtual /= 10;
        }while(somatorioAtual);

        vetor[i] = vetor[i-1] + novoValor;
    }

    // OUTPUT
    int result = vetor[(vetor.size()-1)];
    cout << result << "\n";

    return 0;
}