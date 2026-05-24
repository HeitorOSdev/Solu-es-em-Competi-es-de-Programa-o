#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M, Q;
    string S, T;
    bool isS = true, isT = true;
    
    cin >> N >> M;
    
    unordered_set<char> languageS(N);
    unordered_set<char> languageT(M);
    
    // strings S e T implícitos
    for(int i=0;i<N;i++){
        char letter;
        cin >> letter;
        languageS.insert(letter);
    }
    for(int i=0;i<M;i++){
        char letter;
        cin >> letter;
        languageT.insert(letter);
    }
    
    
    cin >> Q;
    for(int i=0; i<Q; i++){
        string input;
        cin >> input;
        
        for(auto x : input){
            
            if (languageS.count(x) == 0) isS = false;
            if (languageT.count(x) == 0) isT = false;
            if (!isS && !isT){
                cout << "Unknown\n";
                break;
            }
        }
        
        if (isS && isT) {
            cout << "Unknown\n";
        }else{
            if (isS) cout << "Takahashi\n";
            else cout << "Aoki\n";
        }
        
        
        isS = true;
        isT = true;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}