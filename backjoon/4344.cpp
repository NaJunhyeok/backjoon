#include <iostream>

using namespace std;

int main(){
    int C, N, cnt;
    int arr[1000] = {0,};    
    int total;;
    int avg;
    double p = 0;
    cin >> C;
    for(int i = 0; i < C; i++){
        total = 0;
        avg = 0;
        cnt = 0;
        cin >> N;
        for(int j = 0; j < N; j++){
            cin >> arr[j];
            total = total + arr[j];
        }
        avg = total / N;
        for(int j = 0; j < N; j++){
            if(arr[j]>avg){
                cnt++;
            }
        }
        p = (double)cnt/N * 100;
        cout << fixed;
        cout.precision(3);
        cout << p << "%" << endl;
    }
}