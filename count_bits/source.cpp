#include <iostream>
#include <vector>
using namespace std;


int lookup[256];

int set_bit(int n) {

	int res = 0;

	res += lookup[n&255];
	n >>= 8;
	res += lookup[n&255];
	n >>= 8;
	res += lookup[n&255];
	n >>= 8;
	res += lookup[n&255];

	return res;
}

void precompute() {

	lookup[0] = 0;
	for (int i = 1; i < 256; ++i)
		lookup[i] = (i&1) + lookup[i>>1];
}

vector<int> solve(int n) {

	precompute();

	vector<int> ans(n + 1);

	for (int i = 0; i <= n; ++i)
		ans[i] = set_bit(i);

	return ans;
}

int main() {

	int n;
	cin >> n;

	vector<int> ans = solve(n);

	for (auto x: ans)
		cout << x << ' ';
		
	return 0;
}