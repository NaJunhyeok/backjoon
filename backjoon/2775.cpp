#include <iostream>

using namespace std;

int main(){

    int T;

    cin >> T;

    for(int i = 0; i < T; i++){
        int k, n;
        int people[15][15] = {0,};

        cin >> k;
        cin >> n;

        for(int i =0; i < 15; i++){
            people[0][i] = i;
        }
        for(int i = 1; i<= k; i++){
            for(int j = 1; j <= n; j++){
                people[i][j] = people[i-1][j] + people[i][j-1];
            }
        }  
        cout << people[k][n] << endl;
    }
}