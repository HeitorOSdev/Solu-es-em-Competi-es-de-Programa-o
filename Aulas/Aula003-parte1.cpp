// MENOR QUANTIDADE DE MOEDAS PARA CHEGAR NUM VALOR ESCOLHIDO E O HISTÓRICO DAS MOEDAS ESCOLHIDAS

#include <bits/stdc++.h>
#define INF 1e9;
using namespace std;
int main()
{
    
    // ios::sync_with_std
    
    int n = 10; 
    vector<int> coins = {1,3,4};
    vector<int> value(n+1,0);
    vector<int> first(n+1,0);
    value[0]=0;
    for(int x = 1; x<=n; x++){
        value[x] = INF;
        for(auto c : coins){
            if(x-c >= 0 && value[x-c]+1 < value[x]){
                value[x]=value[x-c]+1;
                first[x] = c;
            }
        }
    }
    
    
    cout << value[n] << "\n\n";
    
    while(n>0){
        cout << first[n] << "\n";
        n -= first[n];
    }
    
    

    return 0;
}
