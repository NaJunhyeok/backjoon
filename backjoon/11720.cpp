#include <iostream>

using namespace std;

int main(){
    int n;
    char arr[100];
    int sum = 0;
    cin >> n;



    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i]-'0'; //char형 이기 때문에 문자열 0을 마이너스ㅡ하여 아스키 코드값이 실제 숫자 값에 대응할 수 있도록 한다.
    }
    cout << sum << endl;
}