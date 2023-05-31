#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main() {

	int n, r;
	cout << "Type array length: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i+1;
	}
	r = arr[1] - arr[0];
	for (int i = 1; i < n; i++) {
		if (r != arr[i] - arr[i-1]) {
			cout << "r = 0" << endl;
		} else {
			r = arr[i] - arr[i-1];
			cout << "r = " << r << endl;
		}
	}
}
