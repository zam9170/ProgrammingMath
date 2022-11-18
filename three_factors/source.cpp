/*
	note: 
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

vector<int> get3factors(int n) {
	// Generate all the numbers between range [1, n] which have exactly 3 factors.
	int N = sqrt(n);
	vector<bool> sieve(N+1, true);

	sieve[0] = false;
	sieve[1] = false;

	vector<int> ans;
	for (int i = 2; i <= N; ++i) {
		if (sieve[i]) {
			ans.EB(i*i);
			for (int j = i*i; j <= N; j += i)
				sieve[j] = false;
		}
	}
	return ans;
}
int main() {
	fastio();
	
	read(n);
	for (int x: get3factors(n))
		cout << x << ' ';
	
	return 0;
}