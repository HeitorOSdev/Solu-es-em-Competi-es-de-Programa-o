// Questão_A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    bool result;
    int t; // Número de test_cases ---> Máx=500
    cin >> t; 
    
    
    for(int i = 1; i<=t; i++){
        
        int n; // tamanho da sequência de números
        cin >> n; // Mín=2 Máx=100
        
        vector<int>sequenceVector(n);
        vector<int>testVector;
        int leitura;
        
        for(int j = 0; j<n; j++){
            cin >> sequenceVector[j];
        }
        
        
        sort(sequenceVector.rbegin(), sequenceVector.rend());
        
        testVector.push_back(sequenceVector[0]);
        testVector.push_back(sequenceVector[1]);
        
        int k; k = 0;
        while(k+2 < n){
            testVector.push_back(sequenceVector[k]%sequenceVector[k+1]);
            k++;
        }
        
        if (testVector == sequenceVector) cout << testVector[0] << " " << testVector[1] << "\n";
        else cout << "-1\n";
        
        
    }

    return 0;
}