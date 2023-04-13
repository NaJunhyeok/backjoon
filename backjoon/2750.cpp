#include <iostream>

using namespace std;

int main(){
    int N;
    int x[1000];
    int temp;

    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> x[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(x[i] < x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int i = 0; i < N; i++){
        cout << x[i] << "\n";
    }
    return 0;
}