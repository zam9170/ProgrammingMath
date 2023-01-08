/*
	~ mdzama
*/
#include <bits/stdc++.h>
using namespace std;

#define deb1(x) cout<<#x<<"="<<x<<'\n'
#define deb2(x, y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define all(x) (x).begin(), (x).end()
#define EB emplace_back
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define mod 1000000007

typedef long long ll;
typedef unsigned long long ull;

int log(int n){
	int t = __builtin_clz(n);

	// __builtin_clz() is gcc builtin function which tells us
	// the leading 0's in binary representation of a number.
	return (32-t-1);
}

void solve(){
	int n;
	cin >> n;
	cout << (log(n)) << '\n';
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}