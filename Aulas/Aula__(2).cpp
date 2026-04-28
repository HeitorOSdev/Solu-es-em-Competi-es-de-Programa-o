#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0); cin.tie(0);
    
    // O FOR A SEGUIR PERCORRE OS SUBCONJUNTOS DE N ELEMENTOS //
    
    // Demonstração das iterações
    // int n = 3;
    // for (int b= 0 ; b<(1<<n); b++){
    //     cout<<b;
    // }
    
    // Permutação do conjunto {0, 1, 2} (que é n=3)
    // int n = 3;
    // for (int b= 0 ; b<(1<<n); b++){
    //     vector<int>subset;
    //     for(int i=0; i<n; i++){
    //         if(b&(1<<i)) subset.push_back(i);
    //     }
    //     // print
    //     for (int i=0; i<subset.size(); i++){
    //         cout << subset[i] << " ";
    //     }
    //     cout << "\n";
    //     // clear
    //     subset.clear();
    // }
    
    // ---GERANDO PERMUTAÇÕES--- //
    
    // MÉTODO 1 ---> Força bruta: fora desse main, logo abaixo.
    
    // MÉTODO 2 ---> MÉTODO OURO:
    int n = 3;
    vector<int> permutation;
    for(int i=0; i<n; i++){
        permutation.push_back(i);
    }
    
    do{
        for(auto x : permutation){
            cout << x << " ";
        }
        cout << "\n";
    }while(next_permutation(permutation.begin(), permutation.end()));
    
    
    
    return 0;
    
}



// -------------------------------------------------------------------------- //


// // ---GERANDO PERMUTAÇÕES--- //
    
// // MÉTODO 1 - usando função recursiva com programação dinâmica (memória): //

// // Declaração de variáveis: permutation, n, chosen

// #include<bits/stdc++.h>
// using namespace std;

// int n = 5;
// vector<int> permutation;
// vector<bool> chosen(3);


// void search(){
//     if(permutation.size() == n){
//         // process permutation
//         for(auto x : permutation){
//             cout << x << " ";
//         }
//         cout << "\n";
//     }else{
//         for(int i=0; i<n; i++){
//             if(chosen[i]) continue;
//             chosen[i] = true;
//             permutation.push_back(i);
//             search();
//             chosen[i] = false;
//             permutation.pop_back();
//         }
//     }
// }

// int main () {
//     ios::sync_with_stdio(0);cin.tie(0);
//     search();
// }
    
    
    
    
