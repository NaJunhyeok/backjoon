#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    int N = 0, M = 0;

    for(int i = 0; i < T; i++){

 
        int a = 1;
        int r = 1;

        cin >> N >> M;

        for(int i = M; i > M-N; i--){
            a *= i;
            a /= r++;
        }
        cout << a << endl;
        
    }
    return 0;
}