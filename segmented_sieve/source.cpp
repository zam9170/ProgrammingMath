/*
	constraints: 1 <= low, high <= 10^12
				 1 <= high - low <= 10^6
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define read(x) int x; cin >> x
#define deb1(x) cout <<#x <<' ' <<x <<'\n'
#define deb2(x, y) cout <<#x <<' ' <<x <<',' <<#y <<' ' <<y <<'\n'
#define EB emplace_back
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define mod 1000000007

typedef long long ll;
typedef unsigned long long ull;

vector<int> computeSieve(int n) {

	vector<bool> sieve(n+1, true);
	sieve[0] = false;
	sieve[1] = false;

	vector<int> primes;
	for (int i = 2; i <= n; ++i) {
		if (sieve[i]) {
			primes.EB(i);
			for (int j = i*i; j <= n; j += i)
				sieve[j] = false;
		}
	}
	return primes;
}
void segmentedSieve(ll low, ll high) {

	vector<int> primes = computeSieve(sqrt(high));

	vector<bool> segment(high-low+1, true);
	for (int p: primes) {
		ll firstMul = low/p*p;
		if (firstMul < low)
			firstMul += p;

		for (ll i = max(firstMul, (ll)(p)*p); i <= high; i += p)
			segment[i-low] = false;
	}
	for (ll i = low; i <= high; ++i) {
		if (segment[i-low] && i != 0 && i != 1)
			cout << i << '\n';
	}
}
int main() {
	fastio();
	int T(1);

	cin >> T;
	while (T --> 0) {
		ll low, high;
		cin >> low >> high;
		segmentedSieve(low, high);
		cout << '\n';
	}
	return 0;
}