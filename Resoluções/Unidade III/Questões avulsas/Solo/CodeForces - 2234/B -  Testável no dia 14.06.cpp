#include <iostream>
using namespace std;

bool is_palindrome(long long num) {
    if (num < 0) return false;
    
    long long original = num;
    long long reverso = 0;
    
    while(num > 0) {
        reverso = reverso * 10 + (num % 10);
        num /= 10;
    }
    
    return original == reverso;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        bool achou = false;
        
        for(long long a = 0; a <= n; a++) {
            
            long long b = n - a; 
            
            if(b >= 0 && b%12 == 0 && is_palindrome(a)) {
                
                cout << a << " " << b << "\n";
                achou = true;
                break; 
                
            }
        }
        
        if(!achou) cout << "-1\n";
    }
    
    return 0;
}