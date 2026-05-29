#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t, n, number, quant0, quant1, quant2, qOperations;
    
    cin >> t;
    
    vector<vector<int>> v(t);
    
    for(int i = 0; i<t; i++){
        cin >> n;
        
        quant0 = 0;
        quant1 = 0;
        quant2 = 0;
        
        for(int j=0;j<n; j++){
            cin >> number;
            if(number == 0)quant0++;
            if(number == 1)quant1++;
            if(number == 2)quant2++;
        }
        
        qOperations = quant0;
        int minValue = min(quant1,quant2);
        qOperations += minValue;
        quant1 -= minValue;
        quant2 -= minValue;
        
        if(quant1 > 2){
            qOperations += quant1 / 3;
        }
        if(quant2 > 2){
            qOperations+=(quant2*2) / 6;
        }
        
        cout << qOperations << "\n";
        
    }
    
    return 0;
}