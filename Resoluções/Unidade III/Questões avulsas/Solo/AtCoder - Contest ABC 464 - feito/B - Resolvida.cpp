#include<bits/stdc++.h>
using namespace std;
int main (){

    // ios::sync_with_stdio(0); cin.tie(0);

    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for(int i = 0; i<H; i++){
        cin >> grid[i];
    }

    int min_row = H, max_row = -1;
    int min_col = W, max_col = -1;

    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            if(grid[i][j] == '#'){
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }

    for(int i=min_row;i<=max_row;i++){
        for(int j=min_col;j<=max_col;j++){
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}