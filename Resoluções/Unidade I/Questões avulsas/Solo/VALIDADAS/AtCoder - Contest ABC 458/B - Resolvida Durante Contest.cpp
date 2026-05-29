#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int H, W;
    
    cin >> H >> W;
    
    vector<vector<int>> matrix (H, vector<int>(W, 0));
    // vector<vector<bool>> boolMatrix (vector<vector<int>>(H), vector<int>(W)) = {false};
    
    for(int i=0; i<H;i++){
        
        int iUp = i-1;
        int iDown = i+1;
        
        for(int j=0; j<W;j++){
            
            int jLeft = j-1;
            int jRight = j+1;
            
            // Verificar para cima
            if((iUp) >= 0){
                matrix[i][j]++;
            }
            
            // Verificar para baixo
            if((iDown) < H){
                matrix[i][j]++;
            }
            
            // Verificar para esquerda
            if((jLeft) >= 0){
                matrix[i][j]++;
            }
            
            // Verificar para direita
            if((jRight) < W){
                matrix[i][j]++;
            }
            
        }
        
    }
    
    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            
            cout << matrix[i][j] << " ";
            
        }
        cout << "\n";
    }

    
    

    
    
    
    
    
    
    
    
    
    
    return 0;
}