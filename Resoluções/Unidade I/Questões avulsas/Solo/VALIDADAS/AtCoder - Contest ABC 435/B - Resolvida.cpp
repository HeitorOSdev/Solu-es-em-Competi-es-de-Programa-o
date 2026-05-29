#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    vector<int> v(N);
    
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    
    
    int sum, acc = 0;
    for(int l=0; l<=N; l++){
        
        
        for(int r = l; r<N; r++){
            
            
            sum = 0;
            for(int i=0; i<=r; i++){
                sum += v[i];
            }
            acc++;
            for(int i=0; i<=r; i++){
                if(sum%v[i] == 0) {
                    acc--;
                    break;
                }
            }
            
            
            
        }
        
    }
    
    cout << acc << "\n";
    
    // componentes não podem ser divisores
    
    // for(int i=0;i<N;i++){
        
    //     for(int j=0; j<N; j++){
            
    //         if(i==j) continue;
            
    //         int a = v[i];
    //         int b = v[j];
            
    //         if (a %  != 0) {
                
    //             cout << a << " % " << b << " = " << a%b << "\n";
                
    //             acc++;
    //         }
            
            
    //     }
        
    // }
    
    // cout << acc << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* 
        PENSANDO NA SOLUÇÃO
    
    
    */

    return 0;
}