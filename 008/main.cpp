#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)

const int MOD = 1000000007;

int main()
{
	int N;
	cin >> N;
	string s;
	cin >> s;
	string S;
	int sl = s.length();
	rep(i, sl)
	{
		char c = s[i];
		if (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r')
		{
			S += c;
		}
	}
	int SL = S.length();
	vector<int> cnt(SL, 0);
	string tmp = "atcoder";
	for (int j = 6; j >= 0; j--)
	{
		char c = tmp[j];
		int cur = 0;
		for (int i = SL - 1; i >= 0; i--)
		{
			if (c == 'r' && S[i] == c)
			{
				cnt[i] = 1;
				continue;
			}
			if (tmp[j + 1] == S[i])
			{
				cur += cnt[i];
				cur %= MOD;
			}
			if (c == S[i])
				cnt[i] = cur;
		}
	}
	int ans = 0;
	rep(i, SL)
	{
		if (S[i] == 'a')
		{
			ans += cnt[i];
			ans %= MOD;
		}
	}
	cout << ans << endl;

	return 0;
}
