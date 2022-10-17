#include <iostream>
using namespace std;

#define deb(x) cout << #x << ' ' << x << '\n'
#define read(x) int x; cin >> x

pair<int, int> twoOddFreq(int *arr, int n) {

	int xor_val = 0, xor1 = 0, xor2 = 0;

	for (int i = 0; i < n; ++i)
		xor_val ^= arr[i];

	int tmp = xor_val & ~(xor_val - 1);

	for (int i = 0; i < n; ++i)
		arr[i]&tmp ? xor1 ^= arr[i] : xor2 ^= arr[i];

	return make_pair(xor1, xor2);
}
int main() {

	read(t);

	while (t--) {
		// user input...
		read(n);
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		// output...
		pair<int, int> p = twoOddFreq(arr, n);
		
		cout << p.first << ' ' << p.second << '\n';
	}
	return 0;
}