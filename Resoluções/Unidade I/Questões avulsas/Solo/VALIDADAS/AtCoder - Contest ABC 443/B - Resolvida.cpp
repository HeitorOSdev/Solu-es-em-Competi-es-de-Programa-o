#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    long long N, K, acc = 0, total = 0; // N=idade; K=numero de feijões
    
    cin >> N >> K;
    
    total = N;
    while(total < K){
        acc++;
        total += N+acc;
    }
    cout << acc << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}