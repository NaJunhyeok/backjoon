#include <iostream>
using namespace std;

int main(){
    int x = 0, y =0;
    while(1){
        cin >> x >> y;
        if(x == 0 && y == 0){
            break;
            return 0;
        }
        if(x % y == 0){
            cout << "multiple" << "\n";

        }
        else if (y % x == 0){
            cout <<"factor" << "\n";
        }
        else
            cout << "neither" << "\n";
    }
}