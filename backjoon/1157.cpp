#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int a[26] = {0,};
    int max = 0;
    int index = 0;
    int cnt = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        int ai = s[i];
        if(ai < 97){
            a[ai-65]++;
        }
        else{
            a[ai-97]++;
        }
    }

    for(int i = 0; i< 26; i++){
        if(a[i] > max){
            max = a[i];
            index = i;
        }
    }
    for(int i = 0; i<26; i++){
        if(a[i] == max){
            cnt++;
            if(cnt >= 2){
                cout << '?' << endl;
                return 0;
            }
        }
    }
    cout << char(index+65) << endl;
}