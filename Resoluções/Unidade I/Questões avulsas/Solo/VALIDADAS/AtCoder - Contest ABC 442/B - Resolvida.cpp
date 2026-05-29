#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int Q, volume = 0;
    bool isPlaying = false;
    cin >> Q;
    
    for(int i=0; i<Q; i++){
        int action;
        cin >> action;
        switch (action){
            case 1:
                volume++;
            break;
            
            case 2:
                if(volume>0) volume--;
            break;
            
            case 3:
                isPlaying = !isPlaying;
            break;
        }
        if(isPlaying && volume>=3) cout << "Yes\n";
        else cout << "No\n";
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}