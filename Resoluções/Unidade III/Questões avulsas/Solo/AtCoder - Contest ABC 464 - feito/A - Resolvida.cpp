#include<bits/stdc++.h>
using namespace std;
int main (){

    int eastArmy=0, westArmy=0;
    string S;
    cin >> S;

    for(auto x : S){
        if(x == 'E') eastArmy++;
        else westArmy++;
    }

    if(eastArmy > westArmy) cout << "East\n";
    else cout << "West\n";







    return 0;
}