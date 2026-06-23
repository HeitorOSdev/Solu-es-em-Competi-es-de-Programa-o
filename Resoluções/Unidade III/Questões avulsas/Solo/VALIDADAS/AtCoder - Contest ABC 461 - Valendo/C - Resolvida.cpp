#include<bits/stdc++.h>
using namespace std;
int main()
{
    // sync_with_stdio(0); cin.tie(0);
    
    // N gemas
    
    long long N, K, M;
    cin >> N >> K >> M;
    
    vector<pair<long long,long long>> gemValueColor (N);
    
    unordered_set<long long> diffColors (M);
    
    // Escolha K gemas
    
    for(long long i = 0; i<N; i++){
        cin >> gemValueColor[i].second; // Leitura da cor
        cin >> gemValueColor[i].first;  // Leitura do valor
    }
    
    sort(gemValueColor.rbegin() , gemValueColor.rend());
    
    long long sum = 0;
    
    unordered_set<long long> choosenGemsIdx (K);
    
    diffColors.insert(gemValueColor[0].second);
    
    sum += gemValueColor[0].first;
    
    choosenGemsIdx.insert(0);
    
    long long whileIterator = 1;
    
    while (diffColors.size() != M){
        
        if(diffColors.count(gemValueColor[whileIterator].second) == 0){
            diffColors.insert(gemValueColor[whileIterator].second);
            sum += gemValueColor[whileIterator].first;
            choosenGemsIdx.insert(whileIterator);
        }
        
        whileIterator++;
    }
    
    long long quantityChoosenGems = choosenGemsIdx.size();
    
    for(long long i = 1; i<=N; i++){
        
        if(quantityChoosenGems >= K) break;
        
        if(choosenGemsIdx.count(i) == 0){
            sum += gemValueColor[i].first;
            quantityChoosenGems++;
        }
        
    }
    
    cout << sum << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    










    return 0;
}