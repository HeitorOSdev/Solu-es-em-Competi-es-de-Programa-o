#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N,K, tempo_individual_máximo;
    
    cin >> N >> K;
    
    
    tempo_individual_máximo = K-N+1;
    tempo_individual_máximo /= N;
    
    cout << tempo_individual_máximo << "\n";
    
    
    
    
    return 0;
}