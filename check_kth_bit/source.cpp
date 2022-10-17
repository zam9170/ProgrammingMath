#include <iostream>
using namespace std;
#define read(x) int x; cin >> x

int main() {

	read(t);

	// int t(1);

	while (t--) {
		read(n);
		read(k);
		cout << (n&(1<<(k-1)) ? "ON\n" : "OFF\n");
		cout << (1&(n>>(k-1)) ? "ON\n" : "OFF\n");
	}
	return 0;
}