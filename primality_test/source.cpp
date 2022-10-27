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

bool isprime(int n) {
	if (n==1)
		return false;
	if (n==2 || n==3)
		return true;
	if (n%2==0 || n%3==0)
		return false;

	for (int i = 5; i*i <= n; i += 6)
		if (n%i==0 or n%(i+2)==0)
			return false;

	return true;
}
int main() {
	fastio();
	
	// T is number of test cases
	read(T);
	while (T--) {
		read(n);
		cout << (isprime(n) ? "PRIME\n" : "NOT PRIME\n");
	}
	return 0;
}