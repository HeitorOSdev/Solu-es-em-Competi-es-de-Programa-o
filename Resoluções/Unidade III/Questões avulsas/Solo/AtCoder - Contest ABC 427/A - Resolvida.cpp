#include<bits/stdc++.h>
using namespace std;
int main (){

    // ios::sync_with_stdio(0); cin.tie(0);

    string S;
    cin >> S;

    int meio = (S.size()/2);

    // S.erase(pos,q);
    S.erase(meio,1);
    cout << S << "\n";

    return 0;
}