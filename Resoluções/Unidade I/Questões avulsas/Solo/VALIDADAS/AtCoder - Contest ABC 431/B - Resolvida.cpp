#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int X,N;
    cin >>X>>N;
    N += 1;
    vector<pair<int,bool>>parts(N, pair<int,bool>(0, false));
    
    for(int i=1;i<N;i++){
        cin>>parts[i].first;
    }
    
    int Q, part;
    cin >> Q;
    
    for(int i=1; i<=Q;i++){
        cin >> part;
        
        if(!parts[part].second){
            X+=parts[part].first;
            parts[part].second = true;
        }else{
            X-=parts[part].first;
            parts[part].second = false;
        }
        
        cout<<X<<"\n";
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}