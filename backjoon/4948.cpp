#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int cnt,root = 0;
    while(1){
        cnt = 0;
        cin >> n;
        if(!n){
            break;
        }
        for(int i = n+1; i <= 2*n; i++){   
            rot = sqrt(i);o
            if(root == 1 && i != 1){
                cnt++;
                continue;
            }
            if(i%2){
                for(int j = 2; j <= root; j++){
                    if(i%j == 0){
                        break;
                    }
                    if(j == root){
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }


}