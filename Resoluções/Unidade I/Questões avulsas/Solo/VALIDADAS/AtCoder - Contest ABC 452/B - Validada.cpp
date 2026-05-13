// AtCoder ABC452 - Questão B - Draw Frame - 16.04.2026
// Link: https://atcoder.jp/contests/abc452/tasks
// Heitor

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int H, W;
    
    cin >> H >> W;
    
    vector<vector<char>> v(H, vector<char>(W, '.'));
    
    // char v[H][W];
    
    
    // for(int i = 0; i<H; i++){
    //     for(int j = 0; j<H; j++){
    //         v[i][j] = '.';
    //     }
    // }
    
    
    for(int i=0;i<H;i++){
        v[i][0] = '#';
    }
    for(int i=0;i<H;i++){
        v[i][W-1] = '#';
    }
    for(int i=0;i<W;i++){
        v[0][i] = '#';
    }
    for(int i=0;i<W;i++){
        v[H-1][i] = '#';
    }

    
    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            cout << v[i][j];
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}


