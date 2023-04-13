#include <iostream>

using namespace std;

int main(){
    int arr[9][9]={};
    int max = 0;
    int x,y;
    for(int i = 1; i <= 9 ; i++){
        for(int j = 1; j <= 9; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]){
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << max << "\n"<< x << " " << y <<"\n";
}
#include <iostream>
using namespace std;
 
int main() {
	int x, y;
	int max = 0;
	int a[9][9];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	cout << max << endl;
	cout << x << " " << y;
}