#include <iostream>

using namespace std;

int sum(int n){
    int a[n];
    int result = 0;
    for(int i = 0; i < n; i++){
        result += a[i];
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    int result;
    result = sum(n);
    cout << result << endl;
}