#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    
    int N, Q;
    cin >> N >> Q;
    
    vector<int> v(N, 0);
    
    for(int i = 0; i<Q; i++){
        vector<int> temp(N);
        
        
        int query, pos, cont = 0;
        cin >> query >> pos;
        
        if(query == 1){
            
            v[pos-1]++;
            
            temp = v;
            
            sort(temp.begin(), temp.end());
            
            if (temp[0] > 0){
                for (int i = 0; i<N; i++){
                    v[i]--;
                } 
            } 
            
        }else{ // query == 2
            temp = v;
            sort(temp.begin(), temp.end());
            for(auto x:temp){
                cout << x << " ";
            }
            
            for (int i = 0; i<N; i++){
                if(pos<=temp[i]){
                    cont++;
                    // continue;
                } 
                // if(temp[i]<pos) break;
            }
            
            cout << cont << "\n";
            cont -= cont;
            
        }
        
    }
    
    
    // SORT
    // VERIFICAR APENAS O PRIMEIRO
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}