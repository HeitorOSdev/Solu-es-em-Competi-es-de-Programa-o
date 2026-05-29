#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M, sum;
    bool haveResponse = false;
    cin >> N >> M;
    vector<int> elements(N);
    
    for(int i=0; i<N; i++){
        int leitura;
        cin >> leitura;
        elements[i] = leitura;
        sum += leitura;
    }
    
    for(int i=0; i<N; i++){
        if(sum-elements[i] == M) {
            haveResponse = true;
            i = N;
        }
    }
    
    if(haveResponse) cout << "Yes\n";
    else cout << "No\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}