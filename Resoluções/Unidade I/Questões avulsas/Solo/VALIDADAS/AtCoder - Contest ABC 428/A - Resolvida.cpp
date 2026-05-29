#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int S,A,B,X, totalMeters, totalSeconds = 0;
    cin >> S >> A >> B >> X;
    
    int completeCycle = A+B;
    
    totalMeters = (X/completeCycle)*(S*A);
    int incompleteCycle = X%completeCycle;
    
    if(incompleteCycle != 0) {
        
        if(incompleteCycle <= A) totalMeters += incompleteCycle*S;
        else totalMeters += (incompleteCycle-(incompleteCycle-A))*S;
    }
    
    cout << totalMeters << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}