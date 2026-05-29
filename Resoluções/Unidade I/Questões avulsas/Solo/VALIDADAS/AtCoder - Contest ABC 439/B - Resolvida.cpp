#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    long long acc = 0;
    cin >> N;
    
    /* 
        A happy number is a non-negative integer that becomes 
        1 after repeating the following operation a finite number of times:
        
        Replace it with the integer obtained by taking the sum of the squares of the digits in its decimal representation.
        
    */
    
    unordered_set<int>anteriores;
    
    long long menorDeTodos = N;
    long long anterior;
    do{
        
        anteriores.insert(N);
        acc = 0;
        string num_str = to_string(N);
        for(auto x : num_str) {
            acc += pow((x-'0'), 2);
        }
        N = acc;
        
    }while(N != 1 && anteriores.count(N) != 1);
    
    if (N == 1) cout << "Yes\n";
    else cout << "No\n";
    
    
    // string num_str = to_string(N);
    
    // for(auto x : num_str) {
        
    //     acc += pow((x-'0'), 2);
        
    // }
    
    // cout << acc << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}