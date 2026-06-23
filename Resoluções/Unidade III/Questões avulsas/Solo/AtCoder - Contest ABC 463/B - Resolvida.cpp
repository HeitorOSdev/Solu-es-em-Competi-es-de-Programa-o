#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int N; 
    char X;
    bool livre = false;
    cin >> N >> X;
    
    vector<string> vetorS;
    unordered_map<char,int> mapeamento{
        {'A', 1},
        {'B', 2},
        {'C', 3},
        {'D', 4},
        {'E', 5}
    };
    
    for(int i = 0; i<N; i++){
        string S;
        cin >> S;
        vetorS.push_back(S);
    }
    
    int colunaEscolhida = mapeamento[X];
    
    for(auto x : vetorS){
        if (x[colunaEscolhida-1] == 'o'){
            livre = true;
            break;
        }
    }
    
    if(livre) cout << "Yes\n";
    else cout << "No\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
