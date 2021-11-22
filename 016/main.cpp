#include <bits/stdc++.h>
using namespace std;
typedef long long int;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;

ll N, A, B, C;
vector<int> c_box;
void input()
{
	cin >> N >> A >> B >> C;
}

void solve()
{
	ll ans = 10000;
	for (ll i = 0; i < 10000; i++)
	{
		ll a = i * A;
		for (ll j = 0; j < 10000; j++)
		{
			if (j + i > 10000)
			{
				continue;
			}
			ll b = j * B;
			ll k = (N - a - b) / C;

			if (k >= 0 && (a + b + k * C) == N)
			{
				ans = min(i + j + k, ans);
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	input();
	solve();
	return 0;
}
