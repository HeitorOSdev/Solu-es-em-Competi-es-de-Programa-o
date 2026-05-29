#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, times;
    cin >> N;
    
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    
    int r = 0;
    int c = (N-1)/2;
    int k = 1;
    matrix[r][c] = k;
    
    int repetitions = pow(N, 2)-1;
    
    int a, b;
    for(int i=0; i<repetitions; i++){
        
        // r, c
        int rAntes = r;
        int cAntes = c;
        
        if(r-1 < 0) r = N-1;
        else r = (r-1)%N;
        
        if((c+1)%N > N-1) c = 0;
        else c = (c+1)%N;
        
        if(matrix[r][c] == 0){
            k++;
            rAntes = r;
            cAntes = c;
            matrix[r][c] = k;
        }else{
            k++;
            r = (rAntes+1)%N;
            c = cAntes;
            
            matrix[r][c] = k;
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}