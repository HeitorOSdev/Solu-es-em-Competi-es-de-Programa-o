#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, K, cont, sum = 0;
    string num_str;
    cin >> N >> K;
    
    for(int i=1; i<=N; i++){
        
        // Processamento
        num_str = to_string(i);
        
        for(auto x : num_str){
            sum += x - '0';
        }
        
        // Verificação
        if(sum == K) cont++;
        sum = 0;
        
        
    }
    
    cout << cont;
    
    
    
    
    
    

    return 0;
}