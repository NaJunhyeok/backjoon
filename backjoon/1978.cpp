#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, cnt = 0;
    int arr[100] = {0,};
    cin >> n;
    cnt = n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == 1)
            cnt--;
        for(int j = 2; j <= sqrt(arr[i]); j++){
            if(arr[i] % j == 0){
                cnt--;
                break;
            }
        }

    }
    cout << cnt;
    return 0;
}