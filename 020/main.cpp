#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;
ll a, b, c;
void input()
{
	cin >> a >> b >> c;
}

void solve()
{
	ll ans = 1;
	rep(i, b)
	{
		ans *= c;
	}
	a < ans
		? puts("Yes")
		: puts("No");
}
int main()
{
	input();
	solve();
	return 0;
}
