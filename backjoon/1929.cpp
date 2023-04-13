#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int m, n, root;
    cin >> m >> n;
    int a;
    for(int i = m; i <= n; i++){
        root = sqrt(i);
        if(root == 1 && i != 1){
            a = i;
            cout << a << "\n";
            continue;
        }
        for(int j = 2; j <= sqrt(i); j++){
            if(i%j == 0){
                break;
            }
            if(j == root){
                a = i;
                cout << a << "\n";
            }
        }

    }
}