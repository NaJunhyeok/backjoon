#include <iostream>

using namespace std;

int main(){
    int chk[30] = {0,};
    int a;

    for (int i = 0; i< 28; i++){
        cin >> a;
        chk[a-1] = 1;
    }
    for(int i = 0; i< 30; i++){
        if(chk[i] == 0){
            cout << i << endl;
        }
    }
}