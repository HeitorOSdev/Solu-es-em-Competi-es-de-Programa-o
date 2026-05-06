// AtCoder ABC451 - Questão C - Understory - 10.04.2026
// Link: https://atcoder.jp/contests/abc451/tasks
// Heitor

/*
-> Comentários: Começar a usar o set e descobrir como apagar um intervalo de valores foi o ponto chave para resolver o tempo de execução ! Porém para admitir repetições e ter um resultado correto, bastou usar um multiset !

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int Q, h, option; // 1 - ADD; 2 - REMOVE.
    
    multiset<int> s;
    
    cin >> Q;
    
    for (int i = 0; i<Q; i++){
        cin >> option;
        cin >> h;
        
        if(option == 1){
            // ADD
            s.insert(h);
            
        }else{
            // REMOVER
            auto lb = s.lower_bound(0);
            auto ub = s.upper_bound(h);
            
            s.erase(lb, ub);
        }
        
        cout << s.size() << "\n";
        
    }

    return 0;
}