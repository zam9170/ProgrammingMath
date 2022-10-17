/*
	TC:
	SC:
	Note: This is a mod usecase
*/
#include <iostream>
#include <vector>
using namespace std;

#define read(x) int x; cin >> x
#define deb1(x) cout <<#x <<' ' <<x <<'\n'
#define deb2(x, y) cout <<#x <<' ' <<x <<',' <<#y <<' ' <<y <<'\n'
#define mod 1000000007

typedef long long ll;

int compute_fact(int n) {

	int res = 1;
	for (ll i = 1; i <= n; ++i)
		res = (res * i%mod) % mod;

	return res;
}
int main() {
	
	// read(t);
	int t(1);

	while (t--) {
		read(n);
		cout <<compute_fact(n);
	}

	return 0;
}