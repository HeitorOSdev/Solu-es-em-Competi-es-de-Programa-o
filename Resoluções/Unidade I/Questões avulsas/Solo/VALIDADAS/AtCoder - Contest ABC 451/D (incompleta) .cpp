// AtCoder ABC451 - Questão D - Concat Power of 2 - 10.04.2026
// Link: https://atcoder.jp/contests/abc451/tasks
// Heitor

// #REORDENAÇÃO E CONCATENAÇÃO DAS POTÊNCIAS PARA GERAR NOVOS NÚMEROS ! ORGANIZE EM ORDEM CRESCENTE E ESCOLHA O ENÉSIMO MENOR !

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(0); cin.tie(0);
    
//     vector<int> v(1, 1);
//     vector<int> potencias(1, 1);
    
//     // Entrada
//     int N;
//     cin >> N;
    
//     int proximoExpoente = 0, melhorTeste = 0, enesimoAtual, novoValor; // proximoExpoente -> já preenchido, pois 2 elevado a 0 = 1 (e já está presente)
//     string novoValorString;
    
//     int cont = 0;
    
//     do{
//         enesimoAtual = v.back();
//         // Próximo direto
//         proximoExpoente++;
//         potencias.push_back(pow(2,proximoExpoente));
//         novoValor = potencias.back();
        
//         if (novoValor > enesimoAtual){
//             melhorTeste = novoValor;
//         }
        
//         // Concatenação com valores crescentes até o limite de ser igual a si mesmo...
//         for(int i = 0; i <= proximoExpoente; i++){
//             novoValorString = to_string(enesimoAtual) + to_string(potencias[i]);
//             novoValor = stoi(novoValorString);
//             cout << ":::::::::::::novoValor:::::::::::\n";
//             cout << novoValor << " " << enesimoAtual << " " << melhorTeste << "\n";
//             if(novoValor > enesimoAtual && novoValor < melhorTeste){
//                 melhorTeste = novoValor;
//             }
//         }
        
//         // Concatenação com valores crescentes em ordem contrária
//         for(int i = 0; i <= proximoExpoente; i++){
//             novoValorString = to_string(potencias[i]) + to_string(enesimoAtual);
            
//             novoValor = stoi(novoValorString);
//             if(novoValor > enesimoAtual && novoValor < melhorTeste){
//                 melhorTeste = novoValor;
//             }
//         }
        
        
//         if(valido && enesimoAtual < melhorTeste){
//             v.push_back(melhorTeste);
//             cont++;
//         }
        
        
//     }while(cont < N);
    
//     cout << v[v.size()-2] << "\n";

//     return 0;
    
// }



// SOLUÇÃO QUE PESQUISEI !!!
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    // Entrada
    int N;
    cin >> N; // enésimo melhor valor
    
    
    
    
    
 

    
    
    
    
    
    return 0;
}