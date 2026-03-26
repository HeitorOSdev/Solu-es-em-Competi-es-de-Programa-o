// Competições de Programação - Aula __ ---> Ordenação em C++.

#include<bits/stdc++.h>
using namespace std;


// struct P {
//     int x, y;
//     bool operator<(const P &p){
//         if (x != p.x) return x<p.x;
//         else return y< p.y;
//     }
// };

bool comp (string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a<b;
}


int main () {
    
    // ios::sync_with_stdio(0); cin.tie(0);
    
    // // Ordem crescente
    
    // vector<int> v = {4,2,5,3,5,8,3};
    // sort(v.begin(), v.end());
    
    // cout << "Crescente:   ";
    // for(int i = 0; i<7 ;i++){
    //     cout << v[i] << " ";
    // }
    
    // // Ordem decrescente
    // v = {4,2,5,3,5,8,3};
    // sort(v.rbegin(), v.rend());
    
    // cout << "\nDecrescente: ";
    // for(int i = 0; i<7 ;i++){
    //     cout << v[i] << " ";
    // }
    
    
    // // Outra forma... Em ordem crescente
    // int n=7;
    // int a[] = {4,2,5,3,5,8,3};
    // sort(a,a+n);
    
    // for(int i = 0; i<n ;i++){
    //     cout << a[i] << " ";
    // }
    
    // cout << "\n";
    
    
    // // Ordenação de uma string em ordem alfabética
    // string s = "monkey";
    // sort(s.begin(), s.end());
    
    // cout << s;
    
    
    
    // // OPERADORES DE COMPARAÇÃO EM FUNCIONAMENTO NOS PARES, tuplas (respectivamente: pair, tuple) //
    // vector<pair<int,int>> v;
    // v.push_back({1,5});
    // v.push_back({2,3});
    // v.push_back({1,2});
    // sort(v.begin(), v.end());
    
    // for(int i = 0; i<3 ;i++){
    //     cout << v[i].first << " " <<v[i].second << "\n";
    // }
    
    // // TUPLAS:
    // vector<tuple<int,int,int>> v;
    // v.push_back({2,1,4});
    // v.push_back({1,5,3});
    // v.push_back({2,1,3});
    // sort(v.begin(), v.end());
    
    // for(int i = 0; i<3 ;i++){
    //     cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << "\n";
    // }
    
    
    
    
    // STRUCTS DEFINIDAS PELO USUÁRIO // ---> 
    // Forma de declaração de structs e funções: fora do main, e lembrando do ; depois do fim do escopo do struct{};
    
    
    // vector<P> v;
    // v.push_back({2,3});
    // v.push_back({1,5});
    // v.push_back({2,1});
    // v.push_back({1,2});
    
    // sort(v.begin(), v.end());
    
    // for(auto &p : v){
    //     cout << p.x << " " << p.y << "\n";
    // }
    
    
    // FUNÇÃO DE COMPARAÇÃO ---> comp dentro do sort, sobre um array de string 
    // Ordem de prioridade desse algoritmo: 1.menor palavra, 2.maiúsculo, 3.ordem alfabética.
    
    // vector<string> v = {"kite","Gello","Hello","dcba","abc", "ABC", "aBc", "abC", "Zbc", "aZc", "abZ" };
    
    // sort(v.begin(), v.end(), comp);
    
    // for (int i = 0; i<11; i++){
    //     cout << v[i] << " ";
    // }
    
    
    
    
    // ...
    
    
    
    //  //
    
    
    // // MÉTODO 1: // ---> ***DOCUMENTO CHAVE*** -> CADA MÉTODO... PROVAVELMENTE !
    
    // INCOMPLETO !!! OLHAR SLIDE !
    
    // vector<int> v = {1,2,3,5,9,11,15,17,18};
    // sort(v.begin(), v.end());
    
    // int a = 0, b = 1, x=5;
    
    // while(a <= b){
    //     int k = (a+b)/2;
    //     if(v[k] == x){
    //         cout << " v[" << k <<"] == x ";
    //     }
        
    //     if(v[k] > x) b=k-1;
    //     else a = k+1;
    // }
    
    // MÉTODO 2: 
    
    
    
    
    
    
    
    
    return 0;
}