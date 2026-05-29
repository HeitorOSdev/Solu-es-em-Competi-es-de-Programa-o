#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int H,W,N;
    cin >> H >> W >> N;
    vector<unordered_multiset<int>> matrix(H);
    vector<int> accPorLinha(W);
    
    
    for(int i=0; i<H; i++){
        
        for(int j=0; j<W; j++){
            int number;
            cin >> number;
            matrix[i].insert(number);
        }
        
    }
    
    int maiorAcc = 0;
    vector<int> b_vector(N);
    
    // Escrevendo cada B;
    for(int i = 0; i<N; i++){
        cin >> b_vector[i];
    }
    
    
    int acc;
    
    // Fazendo somatório de cada linha, se o próximo for maior, guarda.
    for(int i=0; i<H; i++){
        
        
        acc = 0;
        
        for(int x : b_vector){
            acc+= matrix[i].count(x);
        }
        
        // for(int j = 0; j<N; j++){
        //     acc += matrix[i].count(b_vector[j]);
        // }
        
        if(acc > maiorAcc) maiorAcc = acc;
        
        
    }
    
    
    cout << maiorAcc << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}