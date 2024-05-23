// En este caso lo primero que hice fue contar la frecuencia de cada número en las cartas con count[c[j]]++. 
// Luego busque el primer número que aparece al menos k veces. Si lo encuentro, establezco las min_cards en k-1, 
// lo cual representa el número mínimo de cartas que pueden quedar después de realizar las operaciones. 
// Esto funciona porque siempre puedo reemplazar k cartas del mismo número por k-1 cartas del mismo número.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        vector<int> count(101, 0);
        for(int j = 0; j < n; j++) {
            cin >> c[j];
            count[c[j]]++;
        }
        int min_cards = n;
        for(int j = 1; j <= 100; j++) {
            if (count[j] >= k) {
                min_cards = k - 1;
                break;
            }
        }
        cout << min_cards << endl;
    }
    return 0;
}