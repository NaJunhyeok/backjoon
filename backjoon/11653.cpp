#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    for(int i = 2; n > 1;){
        if(n % i == 0){
            cout << i << endl;
            n = n/i;
        }
        else{
            i++;
        }
    }
    return 0;
}