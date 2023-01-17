#include <iostream>

using namespace std;

int main(){
    int n;
    char arr[n];
    int sum = 0;
    cin >> n;

    cin >> arr;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i]-'0';
    }
    cout << sum << endl;
}