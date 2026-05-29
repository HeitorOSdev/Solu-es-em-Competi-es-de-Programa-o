#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int D, F;
    cin >> D >> F; // D = total de dias de um ano fictício; F = Dia do primeiro contest do ano 
    
    /*
        Ocorre um contest por semana (a cada 7 dias).
        Ocorre ao menos um contest por ano.
        Qual será o dia do primeiro contest do próximo ano ?
    */
    
    int diaAtual = D-F;
    int primeiroProximoContest = abs(7-(diaAtual%7));
    cout << primeiroProximoContest << "\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}