/*
	TC: O(2^n * n)
	SP: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

#define read(x, y) y x; cin >> x
#define dub(x) cout << #x << ' ' << x << '\n'


void powerset(string s) {

	const int len = s.size();
	const int set_size = pow(2, len);

	for (int cnt = 0; cnt < set_size; ++cnt) {
		string substr = "";
		for (int j = 0; j < len; ++j) {
			if (1&(cnt>>j))
				substr += s[j];
		}
		cout << substr << '\n';
	}
}
int main() {

	read(s, string);

	powerset(s);

	return 0;
}