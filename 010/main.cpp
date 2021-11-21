#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;

int N, Q;
vector<int> C, P, R, L;

void input()
{
	cin >> N;
	rep(i, N)
	{
		int c, p;
		cin >> c >> p;
		C.push_back(c);
		P.push_back(p);
	}
	cin >> Q;
	rep(i, Q)
	{
		int r, l;
		cin >> l >> r;
		L.push_back(l);
		R.push_back(r);
	}
}

void solve()
{
	vector<int> one, two;
	int cn = 0;
	int ct = 0;
	one.push_back(0);
	two.push_back(0);
	rep(i, N)
	{
		int c = C[i];
		int p = P[i];
		(c == 1 ? cn : ct) += p;
		one.push_back(cn);
		two.push_back(ct);
	}
	rep(i, Q)
	{
		int l = L[i] - 1;
		int r = R[i];
		cout
			<< one[r] - one[l] << ' ' << two[r] - two[l] << endl;
	}
}
int main()
{
	input();
	solve();
	return 0;
}
