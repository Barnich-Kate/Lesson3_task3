#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main() {

	int n, k = 0;
	cout << "Type array length: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cout << "Type array's element: ";
		cin >> arr[n];
	}
	
	for (int i = 1; i < n-1; i++) {
		if (arr[i] + arr[i+1] % 2 == 0) {
			cout << i+2 << endl;
			break;
		}
		if (k==0) {
			cout << 0 <<endl;
		}
	}
	}
    
