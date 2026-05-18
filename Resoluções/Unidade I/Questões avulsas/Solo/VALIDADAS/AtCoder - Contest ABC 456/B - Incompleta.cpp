#include<bits/stdc++.h>
using namespace std;
int main () {
    
    ios::sync_with_stdio(0); cin.tie(0);
    
    // vector<vector<int>> dices(vector<vector<int>>(3), vector<int>(6));
    // double result;
    
    // for(){
        
    // }
    
    
    
    
    // result = /18
    
    const double probabilidadeIndividual = 1.0 / 18.0;
    vector<double> contagem(3, 0.0); //0 ---> 4; 1 ---> 5; 2 ---> 6.
    double resultado;
    
    for(int i = 0; i<18; i++){
        int leitura;
        cin >> leitura;
        
        if(leitura > 3){
            contagem[leitura-4]++;
        }
        
    }
    
    // // Rolar 3 e cair um 4
    // contagem[0] / 18.0;
    
    // // Rolar 2 e cair um 5
    // contagem[1] / 12.0;
    
    // // Rolar uma vez e cair um 6
    // contagem[2] / 6.0;
    
    
    
    // CALCULO DA PROBABILIDADE DO 4 E 5 E 6
    // resultado = contagem[0] / 18.0 + contagem[1] / 18.0 + contagem[2] / 18.0;
    
    // double base = 18.0 + (1.0 - resultado) * 18;
    
    // resultado = 1 / base;
    
    // resultado /= 0.3;
    // resultado *= 2;
    
    resultado = contagem[0]*probabilidadeIndividual + contagem[1]*probabilidadeIndividual + contagem[2]*probabilidadeIndividual;
    
    resultado = 18/resultado;
    
    resultado = 1/resultado;
    
    // 1 = x
    // 0.5 = 18
    
    // x * 0.5 = 1*18
    
    // x = 18/0.5
    
    
    
    cout << setprecision(10) << resultado;
    
    
    
    
    return 0;
}