// AULA 8? - COMPETIÇÕES DE PROGRAMAÇÃO - 31/03/2026  

nclude<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    // int x;
    // cin >> x;
    
    vector<int> array = {1,2,3,5,7,9};
    int n = 6;
    
    
    
    
    // int k = 0;
    // for (int b = n/2; b >= 1; b /= 2){
    //     while(k+b < n && array [k+b] <= x) k+=b;
    // }
    
    // if(array[k] == x){
    //     cout << x << " foi encontrado !" << "\n";
    // }else{
    //     cout << x << " não foi encontrado !" << "\n";
    // }
    
    
    // auto k = lower_bound(array.begin(), array.end()+n,x)-array.begin();
    // if(k < n && array[k]==x){
    //     cout << x << " foi encontrado no índice " << k << "\n";
    // }else{
    //     cout << x << " não foi encontrado\n";
    // }
    
    
    
    
    array = {1,2,4,4,4,6,8};
    auto lb = lower_bound(array.begin(), array.end(),4);
    auto ub = upper_bound(array.begin(), array.end(),4);
    
    // cout << "lower_bound(4) está no índice: " << [lb - array.begin()] << "\n";
    // cout << "upper_bound(4) -> (" << ub - array.begin() << ") está no índice: " << up - array.begin() << "\n";
    
    
    
    cout << ub-lb << "\n";
    
    auto r = equal_range(array.begin(), array.end(), 4);
    cout << r.second-r.first << "\n";
    
    // ...


    
    
    
}