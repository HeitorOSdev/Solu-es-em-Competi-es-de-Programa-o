#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int H, W, K; 
    long long result = 0;
    cin >> H >> W >> K;
    vector<vector<int>> sumMatrix(H+1, vector<int>(W+1, 0));
    
    // Lendo dados e preenchendo sumMatrix
    for(int i=1; i<=H; i++){
        
        string S;
        cin >> S;
        
        for(int j=1; j<=W; j++){
            sumMatrix[i][j] = (S[j-1] - '0') + sumMatrix[i-1][j] + sumMatrix[i][j-1] - sumMatrix[i-1][j-1];
        }
    }
    
    for(int r1 = 1; r1<=H; r1++){
        
        for(int r2 = r1; r2<=H; r2++){
            for(int c1 = 1; c1<=W; c1++){
                
                for(int c2 = c1; c2<=W; c2++){
                    
                    if( (sumMatrix[r2][c2] - sumMatrix[r1-1][c2] - sumMatrix[r2][c1-1] + sumMatrix[r1-1][c1-1]) == K) result++;
                    
                }
                
            }
        }
        
    }
    
    cout << result << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    










    return 0;
}