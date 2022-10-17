/*
	TC: O(log n)
	SC: O(1)
*/
#include <iostream>
using namespace std;

#define read(x) int x; cin >> x
#define deb(x) cout << #x << ' ' << x << '\n'

int gray_bin(int n) {

	int res(0);

	while (n > 0) {

		res = res ^ n;
		n  = n >> 1;
	}
	return res;
}
int main() {

	int t(5);

	while (t--) {
		// gray code 	->	  binary code
		read(n);
		cout << gray_bin(n) << '\n';

	}
	return 0;
}