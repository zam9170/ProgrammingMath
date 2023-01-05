/*
	~ mdzama6600
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

void printSegment(int L, int R, char segment[]) {
	for (int i = L; i <= R; ++i) {
		if (segment[i-L])
			cout << i << ' ';
	}
	return ;
}
vector<int> computePrimes(int tillSqt) {
	const int N = tillSqt + 1;

	char sieve[N];
	memset(sieve, '1', N);
	sieve[0] = sieve[1] = false;

	vector<int> primes;
	for (int i = 2; i < N; ++i) {
		if (sieve[i]) {
			primes.EB(i);
			for (int j = i*i; j < N; j += i)
				sieve[j] = false;
		}
	}
	return primes;
}
void printPrimes(int L, int R) {

	const int tillSqt = sqrt(R);
	const int sizeSeg = R-L + 1;

	vector<int> primes = computePrimes(tillSqt);

	// create segment and sieve it using primes vector.
	char segment[sizeSeg];
	memset(segment, '1', sizeSeg);

	for (int P: primes) {
		int firstMul = ceil(L/(double)(P))*P;
		int pow2 = P*P;

		for (int j = max(firstMul, pow2); j <= R; j += P)
			segment[j-L] = false;
	}
	return printSegment(L, R, segment);
}
int main() {
	fastio();
	int T(1);

	cin >> T;
	while (T --> 0) {
		read(L);
		read(R);
		L = max(L, 2);

		if (L < R)
			printPrimes(L, R);

		cout << '\n';
	}
	return 0;
}