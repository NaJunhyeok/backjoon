#include <iostream>
using namespace std;

int main()
{
    int in[10];
    int out[10];
    int max = 0;
    int person = 0;

    for (int i = 0; i < 10; i++){
        cin >> in[i] >> out[i];
        person = out[i] - in[i] + person;
        if (max < person)
            max = person;
    }
    cout << max << endl;

    return 0;
}