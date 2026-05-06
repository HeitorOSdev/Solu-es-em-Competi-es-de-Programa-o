// Questão resolvida no dia 27/03/2026
// Presentes resolução: Heitor Felipe, Silvio Bruciaferro

#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    
    cin >> N;
    
    cout << N;
    for(int i = N-1; i>0; i--){
        cout << "," << i;
    }
    
    cout << "\n";
    
    return 0;
    
}