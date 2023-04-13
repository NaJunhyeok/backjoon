#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char arr[80];
    int T;
    int cnt = 0;
    int score = 0;
    cin >> T;
    for(int i = 0; i < T; i++){
        cnt = 0;
        score = 0;
        cin >> arr;
        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == 'O'){
                cnt++;
                score += cnt; 
            }
            if(arr[j] == 'X'){
                cnt = 0;
            }
        }
        cout << score << endl;
    }
}