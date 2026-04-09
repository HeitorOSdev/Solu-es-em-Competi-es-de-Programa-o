// Competições de Programação - Aula _ - (08.04.2026)

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    // Parte 1 - Vector
    // vector<int> v(10);
    
    // for(auto x : v){
    //     cout << x << "\n";
    // }
    
    // Parte 2
    // string a = "hatti";
    // string b = a+a;
    // cout << b << "\n";
    // b[5] = 'v';
    // cout << b << "\n";
    // string c = b.substr(3,4);
    // cout << c << "\n";
    
    // Parte 3 - funções do set
    // set<int> s;
    // s.insert(3);
    // s.insert(2);
    // s.insert(5);
    // cout << s.count(3) << "\n";
    // cout << s.count(4) << "\n";
    // s.erase(3);
    // s.insert(4);
    // cout << s.count(3) << "\n";
    // cout << s.count(4) << "\n";
    
    // Parte 4
    // set<int> s = {5,2,8,6};
    // cout << s.size() << "\n\n";
    // for (auto x : s){
    //     cout << x << "\n";
    // }
    
    // Parte 5 - Existe também o unordered_
    // multiset<int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // cout << s.count(5) << "\n";
    
    // s.erase(5);
    // cout << s.count(5) << "\n";
    
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.erase(s.find(5));
    // cout << s.count(5) << "\n";
    
    // Parte 6 - MAP (Existe também o unordered
    // map<string, int> m;
    // m["monkey"] = 4;
    // m["banana"] = 3;
    // m["harpsichord"] = 9;
    // cout << m["banana"] << "\n\n";
    
    // cout << m["aybabtu"] << "\n";
    
    // Parte 7
    // if(m["aybabtu"]){ // testar se existe cria o conjunto caso ela não exista
    //     // if key exists
    // }
    
    // for (auto x : m){
    //     cout << x.first << " " << x.second << "\n";
    // }
    
    // Parte 8 - Iteradores de set
    // set<int> s = {2,5,6,8};
    // auto it = s.begin();
    // cout << it << "\n\n";  // Nem roda !
    // cout << *it << "\n";
    
    // Parte 9
    // set<int> s = {2,5,6,8};
    // for (auto it = s.begin(); it != s.end(); it++){
    //     cout << *it << "\n";
    // }
    
    // cout << "\n";
    
    // auto it = s.end();
    // it--;
    // cout << *it << "\n"; // mostrando o último elemento *(it-1)
    
    // Parte 10
    auto it = s.find(x);
    if (it == s.end()){
        // x não encontrado
    }
    
    // Parte 11
    /*
        REVISANDO lower_bound: encontra x ou valor diretamente superior a ele.
        REVISANDO upper_bound: encontra sempre o número diretamente superior a x.
    */
    // CÓDIGO DA PÁGINA DO SLIDE COM TÍTULO: ITERADORES DE SET: (...) -> colocar para testar em casa
    
    // Parte 12 - BITSET -> na página de mesmo título no slide
    
    // OUTRAS PARTES: DEQUE, PILHA, FILA.
    
    
    
    
    
    
    return 0;
}
