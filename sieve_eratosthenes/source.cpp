/*
	~ mdzama6600
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define read(x) int x; cin >> x
#define deb1(x) cout <<#x <<' ' <<x <<'\n'
#define deb2(x, y) cout <<#x <<' ' <<x <<',' <<#y <<' ' <<y <<'\n'
#define mod 1000000007

typedef long long ll;
typedef unsigned long long ull;

const int N = 1000000;
vector<bool> sieve(1000001, true);

void computeSieve() {

	sieve[0] = sieve[1] = false;

	for (int i = 2; i*i <= N; ++i) {
		if (sieve[i] == false)
			continue;
		else
			for (int j = i*i; j <= N; j += i)
				sieve[j] = false;
	}
}
int main() {
	fastio();
	int T(1);

	cin >> T;
	computeSieve();
	while (T --> 0) {
		// user input
		read(n);
		cout << (sieve[n] ? "YES\n" : "NO\n");
	}
	return 0;
}