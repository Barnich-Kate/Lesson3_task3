#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main() {

	const int n = 10;
	int arr[n];
	for (int i = 1; i <= n; i++) {
		arr[i] = rand();	
		
	}
	
	if (arr[0] < arr[10]) {
			cout << arr[0] <<endl;
		} else {
			cout << "0" << endl;
		}
	}
