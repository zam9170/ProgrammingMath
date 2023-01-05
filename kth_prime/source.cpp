/*
	note: 
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

int N = 86028122;
vector<int> prime;

void computeSieve() {

	vector<bool> sieve(N+1, true);
	sieve[0] = false;
	sieve[1] = false;

	for (int i = 2; i*i <= N; ++i) {
		if (not sieve[i])
			continue;
		
		for (int j = i*i; j <= N; j += i)
			sieve[j] = false;
	}
	for (int i = 0; i <= N; ++i) {
		if (sieve[i] == true)
		prime.emplace_back(i);
	}
	sieve.clear();
}
int main() {
	fastio();
	computeSieve();

	read(q);
	while (q --> 0) {
		read(k);
		cout << prime[k-1] << '\n';
	}
	
	return 0;
}