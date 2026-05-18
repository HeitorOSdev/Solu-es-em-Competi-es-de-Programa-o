#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N,X;
    
    cin >> N >> X;
    
    // Lendo A...
    for(int i=0;i<N;i++){
        
        int A;
        cin >> A;
        
        // Se menor ---> Update e output 1
        if(A < X){
            X = A;
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
    
    
    
    
    
    

    return 0;
}