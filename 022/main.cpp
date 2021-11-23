#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;

ll A,B,C;

void input() {
	cin >> A >> B >> C;	
}

void solve() {
	ll border = gcd(A, gcd(C, B));
	ll ans = A/border + B/border + C/border - 3;
	cout << ans << endl;
}

int main(){
	input();
	solve();
	return 0;
}
