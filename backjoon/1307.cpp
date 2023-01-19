#include <iostream>

using namespace std;

int main(){

    int T,P,M,F,C,num,cnum,a,b;
    cin >> T;

    for(int i = 0; i< T; i++){
        cin >> P >> M >> F >> C;
        
        num = M/F;
        cnum = num*C;
        a = num + cnum/F;
        b = num + cnum/F +((((M/P)*C)/F)*C)/F;
        cout << b-a<< endl;
        

    }

}