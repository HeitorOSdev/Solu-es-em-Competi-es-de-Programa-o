#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M, result = 0;
    cin >> N >> M;
    
    cin>>ws;
    
    vector<string> matrix(N);
    for(int i = 0; i < N; i++){
        getline(cin, matrix[i]);
    }
    
    unordered_set<string> padrao;
    
    for(int i = 0; i + M <= N; i++) {
        for(int j = 0; j + M <= N; j++) {
            
            string regiao = "";
            
            for(int Mi = i; Mi < i + M; Mi++){
                for(int Mj = j; Mj < j + M; Mj++){
                    regiao.push_back(matrix[Mi][Mj]);
                }
            }
            
            if(regiao != "" && padrao.count(regiao) == 0) {
                padrao.insert(regiao);
                result++;
                
                for(auto x : regiao){
                    cout << x << " ";
                }
                cout << "\n";
            }
        }   
    }
    
    cout << result << "\n";
    
    return 0;
}