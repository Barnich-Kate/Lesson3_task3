#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main() {

	int n, k, l;
	cout << "Type array length: ";
	cin >> n;
	cout << "Type number 1: ";
	cin >> k;
	cout << "Type number 2: ";
	cin >> l;
	int arr[n];
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		arr[i] = i+1;
	}
	for (int i=k; i<=l; i++) {
		sum += arr[i];
		cout << sum << endl;
	}
	}
