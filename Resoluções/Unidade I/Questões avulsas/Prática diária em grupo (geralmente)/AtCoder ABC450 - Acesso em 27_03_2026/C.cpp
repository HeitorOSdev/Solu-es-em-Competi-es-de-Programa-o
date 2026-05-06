// vector<vector<pair<int,int>>> regioes; ---> Não precisamos guardar a posição dos valores na forma de uma lista... basta uma matriz idêntica, booleana, inicialmente com apenas 0, sendo o 1 = explorado, é suficiente para dizer que aquilo faz parte de uma região já explorada (e contada). 

#include<bits/stdc++.h>
using namespace std;

int H, W;

vector<vector<bool>> v;
vector<vector<bool>> vJaExplorado; //---> Muda bastante a lógica geral... Vamos lá ! Teste 1: vamos ver se roda
bool valido = true;

bool buscarGuardarVizinhos (int i, int j){
    
    int iteradorBaixo = i+1, iteradorEsquerda = j-1, iteradorCima = i-1, iteradorDireita = j+1;
    
    vJaExplorado[i][j] = true; // SETAR COMO EXPLORADO NO "MAPA_DE_EXPLORAÇÃO"
    
    // DIREITA -> mexer com j
    if(iteradorDireita < W && v[i][iteradorDireita] && !vJaExplorado[i][iteradorDireita]){ // 1.verificar se não ultrapassa a borda -> Pela direita.
        
        // + verificar se é borda, se sim -> valido = false;
        if(iteradorDireita == W-1) valido = false; // ÍNDICE DA BORDA DIREITA = W-1
        buscarGuardarVizinhos(i, iteradorDireita);
        
    }
    
    // BAIXO -> mexer com i
    if(iteradorBaixo < H && v[iteradorBaixo][j] && !vJaExplorado[iteradorBaixo][j]){ // 1.verificar se não ultrapassa a borda -> Por baixo.
        
        // + verificar se é borda, se sim -> valido = false;
        if(iteradorBaixo == H-1) valido = false; // ÍNDICE DA BORDA DIREITA = W-1
        buscarGuardarVizinhos(iteradorBaixo, j);
        
    }
    
    // ESQUERDA -> mexer com j
    if(iteradorEsquerda > -1 && v[i][iteradorEsquerda] && !vJaExplorado[i][iteradorEsquerda]){ // 1.verificar se não ultrapassa a borda -> Pela esquerda.
        
        // + verificar se é borda, se sim -> valido = false;
        if(iteradorEsquerda == 0) valido = false; // ÍNDICE DA BORDA esquerda = 0
        buscarGuardarVizinhos(i, iteradorEsquerda);
        
    }
    
    
    
    // CIMA -> mexer com i
    if(iteradorCima > -1  && v[iteradorCima][j] && !vJaExplorado[iteradorCima][j]){ // 1.verificar se não ultrapassa a borda -> Por cima.
        
        // + verificar se é borda, se sim -> valido = false;
        if(iteradorCima == 0) valido = false; // ÍNDICE DA BORDA de cima = 0
        buscarGuardarVizinhos(iteradorCima, j);
        
    }
    
    return valido;
    
};



int main(){
    // ios::sync_with_stdio(0); cin.tie(0);
    
    int regioesValidasDiretas = 0;
    
    cin >> H >> W;
    
    v.resize(H, vector<bool>(W, false));
    vJaExplorado.resize(H, vector<bool>(W, false));
    
    for(int i = 0; i<H; i++){
        
        string input;
        cin >> input;
        
        for(int j = 0; j<W; j++){
            if(input[j] == '.') v[i][j] = 1;
        } 
    }
    
    for(int i = 1; i<H-1; i++){
        for(int j = 1; j<W-1; j++){
            
            bool branco = v[i][j];
            
            bool naoMapeado = !vJaExplorado[i][j];
            
            if(branco && naoMapeado && buscarGuardarVizinhos(i, j)){
                
                regioesValidasDiretas++;
                
            }else{
                valido = true;
            }
            
        }
    }
    
    cout << regioesValidasDiretas << "\n";
    
    return 0;
}