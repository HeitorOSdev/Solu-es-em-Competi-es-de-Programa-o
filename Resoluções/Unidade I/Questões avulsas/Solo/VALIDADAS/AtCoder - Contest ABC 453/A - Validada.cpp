#include<bits/stdc++.h>
using namespace std;
int main (){
    
    ios::sync_with_stdio(0);cin.tie(0);
    
    // INPUT
    string S;
    int count = 0, N;
    
    cin >> N;
    cin >> S;
    
    // PROCESSAMENTOS
    
    // Contagem dos primeiros 'o'
    for(auto x : S){
        if (x == 'o'){
            count++;
        }else{
            break;
        }
    }
    
    S = S.substr(count);
    
    
    // OUTPUT
    if (count-1 == S.length()) return 0;
    cout << S;
    return 0;
}