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

vector<int> getFactors(int n) {
	vector<int> factors; int i;

	for (i = 1; i*i < n; ++i) {
		if (n%i == 0)
			factors.EB(i);
	}
	for (i = i; i >= 1; --i) {
		if (n%i == 0)
			factors.EB(n/i);
	}
	return factors;
}
int main() {
	fastio();
	
	read(n);
	for (int x: getFactors(n))
		cout << x << ' ';
	
	return 0;
}