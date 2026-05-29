#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t; 
    long long indexMaxA=0, indexMaxB=0, maxIndex, max;
    cin >> t;
    
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        
        vector<long long> a(n);
        vector<long long> b(n);
        
        // LEITURA DO VETOR A e do maxA
        for(int j=0; j<n; j++){
            long long numberA;
            long long maxA = -1;
            cin >> numberA;
            a[j] = numberA;
            
            if(numberA > maxA) {
                maxA = numberA;
                indexMaxA = j;
            }
            
        }
        
        // LEITURA DO VETOR B e do maxB
        for(int j=0; j<n; j++){
            long long numberB;
            long long maxB = -1;
            cin >> numberB;
            b[j] = numberB;
            
            if(numberB > maxB) {
                maxB = numberB;
                indexMaxB = j;
            }
            
        }
        
        //COMPARAÇÃO DOS MAXs
        if(a[indexMaxA] > b[indexMaxB]){
            max = a[indexMaxA];
            maxIndex = indexMaxA;
            
        }else{
            max = b[indexMaxB];
            maxIndex = indexMaxB;
            
            long long aux = a[indexMaxA];
            a[indexMaxA] = b[indexMaxB];
            b[indexMaxB] = aux;
            
        }
        
        int acc = 0;
        for(int j=0; j<n;j++){
            
            if (j == maxIndex) {
                acc += b[j];
                continue;
            }
            
            if(a[j] > b[j]){
                acc += a[j];
            }else{
                acc += b[j];
            }
        }
        
        
        // for(auto x:a) cout << "\n\n a: " << x << " ";
        // cout << "\n";
        // for(auto x:b) cout << "\n\n b: " << x << " ";
        // cout << "\n\n";
        
        
        // cout << "\n\nmax = " << max << " acc = " << acc << "\n\n";
        
        cout << acc+max << "\n";
        
        
        
    }
    
    
    
    
    
    
    
    
    
//     int t, acc = 0;
//     cin >> t;
    
//     for(int i=0; i<t;i++){
        
//         // Leitura do tamanho dos arrays -> n
// 		int n, totalReps;
// 		cin >> n;
// 		vector<int> v(n*2);
// 		totalReps = n*2;
		
// 		// Leitura dos array 'a' e 'b'
// 		for(int j = 0; j<totalReps; j++) {
// 			cin >> v[j];
// 		}
		
// 		sort(v.begin(), v.end());
		
// 		for(int j = (n*2)-2; j>=n-1; j--){
// 		    acc += v[j];
// 		}
		
// 		int result = v[n*2-1] + acc;
		
// 		cout << "\n\n";
		
// 		for(auto x : v) cout << x << " ";
		
// 		cout << "\n\n";
		
// 		cout << result << "\n";
		
//         acc = 0;
        
        
        
//     }
    
    
    
    


    
// 	int t, maxA = -1, maxB = -1, accA = 0, accB = 0;
// 	cin >> t;

// 	// Leitura de cada caso de teste
// 	for(int i=0; i<t; i++) {

// 		// Leitura do tamanho dos arrays -> n
// 		int n;
// 		cin >> n;

// 		// Leitura do array 'a'
// 		for(int j = 0; j<n; j++) {
// 			int number;
// 			cin >> number;


// 			if(number > maxA) maxA = number;
// 			accA += number;

// 		}

// 		// Leitura do array 'b'
// 		for(int j = 0; j<n; j++) {
// 			int number;
// 			cin >> number;

// 			if(number > maxB) maxB = number;
// 			accB += number;
// 		}

// 		// For each testcase, output the maximum value of max(a)+∑ni=1bi attainable.

// 		int directResult = maxA+accB;
// 		int swapResult = maxB+accA;

// 		if(directResult > swapResult) cout << directResult << "\n";
// 		else cout << swapResult << "\n";;

// 		maxA = -1;
// 		maxB = -1;
// 		accA = 0;
// 		accB = 0;

// 	}
















	return 0;
}