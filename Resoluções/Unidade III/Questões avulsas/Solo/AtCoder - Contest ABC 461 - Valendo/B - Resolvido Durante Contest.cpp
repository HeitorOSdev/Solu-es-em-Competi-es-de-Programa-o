#include<bits/stdc++.h>
using namespace std;
int main()
{
    // sync_with_stdio(0); cin.tie(0);
    bool tellingTruth = true;
    int N;
    cin >> N;
    
    // vector<int> woodcutters(N+1, 0);
    vector<int> smartAxes(N+1, 0);
    
    
    
    for(int i = 1; i<N+1; i++){
        cin >> smartAxes[i];
    }
    
    // for(int i = 1; i<N+1; i++){
    //     cin >> woodcutters[i];
    // }
    
    for(int i = 1; i<N+1; i++){
        int leitura;
        cin >> leitura;
        
        // i fala que pegou o leitura
        // smartAxes confirma:
        
        if (smartAxes[leitura] != i){
            tellingTruth = false;
            break;
        }
    }
    
    if (tellingTruth) cout << "Yes\n";
    else cout << "No\n";
    


















    return 0;
}