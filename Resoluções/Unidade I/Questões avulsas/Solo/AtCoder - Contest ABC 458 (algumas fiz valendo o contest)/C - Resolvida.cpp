#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    // // Cond1: Número ímpar de caracteres
    // // It's middle character is C.
    
    // string S;
    // int acumulador = 0;
    
    // cin >> S;
    
    // // Janela deslizante !
    // int size = S.size();
    
    // for(int janela=1; janela<=size; janela+=2){
        
    //     int janelaInicio = 0;
    //     int janelaLargura = janela;
        
    //     string tempS;
    //     int tempSize;
        
    //     do{
            
    //         tempS = S.substr(janelaInicio, janelaLargura);
    //         tempSize = tempS.size()/2;    
            
    //         if(    tempS[tempSize] == 'C'    ){
    //             acumulador++;
    //         }
    //         janelaInicio++;
    //     }while(janelaInicio+janelaLargura<=size);
    // }
    
    // cout<<acumulador;
    
    
    
    ////////////////////// NOVA ABORDAGEM ///////////////////////////////
    
    
    string S;
    int cont = 0;
    
    cin >> S;
    
    int size = S.size();
    
    int indexInferior, indexSuperior;
    for(int i = 0; i<=size; i++){
        
        indexInferior = i;
        indexSuperior = i;
        
        if(S[i] == 'C'){
            
            cont++;
            indexInferior = i-1;
            indexSuperior = i+1;
            
            while(indexInferior>=0 && indexSuperior<size){
                cont++;
                indexInferior--;
                indexSuperior++;
            }
            
            
            
        }
    }
    
    cout << cont;
    
    
    
    
    
    return 0;
}