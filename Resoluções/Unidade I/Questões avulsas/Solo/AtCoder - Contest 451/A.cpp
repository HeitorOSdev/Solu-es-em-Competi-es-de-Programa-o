// AtCoder ABC451 - Questão A - illegal - 10.04.2026
// Link: https://atcoder.jp/contests/abc451/tasks
// Heitor

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    string S;
    int cont = 0;

    // Entrada
    cin >> S;
    
    // Processamento
    for(auto x : S){
        cont++;
    }
    
    // Saída
    
    if (cont%5 == 0){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    

    return 0;
}