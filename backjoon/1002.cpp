#include <iostream>

using namespace std;

int main(){
    int T, a, b;
    cin >> T;



    for(int i = 0; i < T; i++){

        int s = 1;

        cin >> a >> b;
        
        for(int i = 0; i < b; i++){
            s = (s*a) % 10;
        }
        if(s == 0){
            s = 10;
        }
        cout << s << endl;
    }
    return 0;


}