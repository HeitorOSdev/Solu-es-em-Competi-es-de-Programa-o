#include<bits/stdc++.h>
using namespace std;
int main (){

    int X,Y,L,R,A,B, taxaTotal = 0;
    cin >> X >> Y >> L >> R >> A >> B;

    // 14horas

    // 9 - 17

    // 7 -> 8 = 300
    // -> 9 = 300 --- 600
    // -> 10 = 700
    // -> 11 = 700
    // -> 12 = 700
    // -> 13 = 700
    // -> 14 = 700
    // -> 15 = 700
    // -> 16 = 700
    // -> 17 = 700 --- 5600
    // -> 18 = 300
    // -> 19 = 300
    // -> 20 = 300
    // -> 21 = 300 --- 1200+600 --- 1800

    // --- 7400
    // cout << "horaAtual: " << A << ", taxaTotal = " << taxaTotal << "\n";
    for(int horaAtual = A; horaAtual < B; horaAtual++){
        if (horaAtual >= L && horaAtual+1 <= R){
            taxaTotal += X;
        }else{
            taxaTotal += Y;
        }

        // cout << "horaAtual: " << horaAtual << ", taxaTotal = " << taxaTotal << "\n";

    }
    cout << taxaTotal << "\n";

    

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int main (){

    
    
//     int L; // period start
//     int R; // period end
//     int X; // fee of L to R (for each hour)
//     int Y; // fee of the not covered period
//     // Test case period (whitout crossing midnight):
//     int A ; // test period start
//     int B; // test period end

//     cin >> X >> Y >> L >> R >> A >> B;

//     int time = A;
//     int result = 0;
//     bool end = false;

//     while (!end){
//         if(time >= L && time < R) {
//             result += X;
//         }else{
//             result += Y;
//         }

//         time++;
//         if(time > B) end = true;
//     }

//     cout << result << "\n";

//     return 0;
// }