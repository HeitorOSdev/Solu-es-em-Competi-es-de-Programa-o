#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    long long N, M, a, b, result;
    string S, T;
    cin >> N >> M >> S >> T;
    
    // Achando a melhor substring
    string sub, melhorSub = T;
    long long sum, opsMelhorSub = M*10, maxReps = N/M+1;
    
    for(long long i = 0; i<maxReps; i++){
        sub = S.substr(i, M);
        
        sum = 0;
        for(long long j=0; j<M; j++){
            
            a = T[j]-'0';
            b = sub[j]-'0';
            
            if(a!=b){
                if(b>a) result = abs(b-a);
                else result = abs(10-a+b);
            }else{
                result = 0;
            }
            
            sum += result;
        }
        
        if (sum < opsMelhorSub) {
            opsMelhorSub = sum;
            melhorSub = sub;
        } 
    }
    
    cout << opsMelhorSub << "\n"; 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int N, M, ops=0;
    // string S, T, sub;
    // bool continuar = true;
    // cin >> N >> M >> S >> T;
    
    // if(S.find(T) != string::npos) {
    //     cout << ops << "\n";
    //     return 0;
    // }
    
    
    // // Olhando valores mais próximos (mínimo de ops)
    
    // // "2025" >> 2 0 2 5 >> 2 0 >> 0 2 >> 2 5
    
    // int totalReps = (N/M)+1;
    // int indexMinimunDiference = 0;
    // for (int i = 0; i<totalReps; i++){
        
    //     sub = S.substr(i, M);
        
    //     if(stoi(sub))
        
    //     if() indexMinimunDiference = i; 
        
    //     // min(abs(a - b), abs(10-b-a));
        
    // }
    
    
    
    
    
    
    // do {
        
        
        
        
        
        
        
        
        
    // }while(continuar);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}