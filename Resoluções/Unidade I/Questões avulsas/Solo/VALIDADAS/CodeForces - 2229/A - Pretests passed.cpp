#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    
    int t, position, minPosition = 1001, maxPosition = -1;
    cin >> t;
    
    
    // Leitura de cada caso de teste
    for(int i=0; i<t; i++){
        
        // Leitura do número de slimes
        int n;
        cin >> n;
        
        for(int j=0; j<n; j++){
            cin >> position;
            
            if (position < minPosition) {
                minPosition = position;
            }
            if (position > maxPosition) {
                maxPosition = position;
            }
            
        }
        
        
        // Output
        int result;
        int diference = maxPosition - minPosition;
        if (diference == 0){
            cout << 0 << "\n";
        }else{
            result = (diference+1)/2;
            cout << result << "\n";
        }
        
        maxPosition = -1;
        minPosition = 1001;
        
        
        
        // int result;
        // int diference = maxPosition - minPosition;
        // int nearbyPosition = (diference+minPosition)/2;
        // if (nearbyPosition%2 != 0) nearbyPosition++;
        // if ( abs(nearbyPosition-maxPosition) > nearbyPosition-minPosition) result = abs(nearbyPosition-maxPosition);
        // else result = nearbyPosition-minPosition;
        // cout << result << "\n";
        
        
    }
    
    // Determine the minimum number of operations to make all slimes occupy the same position.

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // // Leitura de cada caso de teste
    // for(int i=0; i<t; i++){
        
    //     // Leitura do número de slimes
    //     int n;
    //     cin >> n;
        
    //     vector<int> slimes(n);
        
    //     for(int j=0; j<n; j++){
            
    //         // Leitura da posição inicial de cada slime
    //         cin >> slimes[j];
            
    //     }
    // }
    
    // // Determine the minimum number of operations to make all slimes occupy the same position.


    
    
    
    
    
    
    
    return 0;
}