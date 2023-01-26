#include <iostream>

using namespace std;

int main(){
    int N = 0;  
    cin >> N;

    int bag = 0;

    while(N>=0){
        if(N % 5 == 0){
            bag += (N/5);
            cout << bag << endl;
            return 0;
        }
        else{
            bag++;
            N -= 3;
        }
    }
    cout << -1 << endl;
}
