#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    vector<string> v(N);
    map<char,int> dictionary = {
        {'a', 2 },
        {'b', 2 },
        {'c', 2 },
        {'d', 3 },
        {'e', 3 },
        {'f', 3 },
        {'g', 4 },
        {'h', 4 },
        {'i', 4 },
        {'j', 5 },
        {'k', 5 },
        {'l', 5 },
        {'m', 6 },
        {'n', 6 },
        {'o', 6 },
        {'p', 7 },
        {'q', 7 },
        {'r', 7 },
        {'s', 7 },
        {'t', 8 },
        {'u', 8 },
        {'v', 8 },
        {'w', 9 },
        {'x', 9 },
        {'y', 9 },
        {'z', 9 },
    };
    
    for(int i=0; i<N;i++){
        string S;
        cin >> S;
        
        cout << dictionary[S[0]];
        
        
        
    }
    
    cout << "\n";
    
    
    
    
    
    
    
    
    
    return 0;
}