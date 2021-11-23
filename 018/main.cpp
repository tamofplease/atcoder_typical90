#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;

int T, L, Q;
double X, Y;
vector<int> E;

void input()
{
	cin >> T >> L >> X >> Y >> Q;
	rep(i, Q)
	{
		int e;
		cin >> e;
		E.push_back(e);
	}
}

double y_t(double t)
{
	double ct = (t / T) * M_PI * 2;
	return sin(ct + M_PI) * (L / 2.0);
}

double z_t(double t)
{
	double ct = (t / T) * M_PI * 2;
	return (cos(ct + M_PI) + 1) * (L / 2.0);
}

void solve()
{
	rep(i, Q)
	{
		double tanc = z_t(E[i]) / sqrt(X * X + abs(y_t(E[i]) - Y) * abs(y_t(E[i]) - Y));
		printf("%.15f\n", atan(tanc) * 360 / (2 * M_PI));
	}
}

int main()
{
	input();
	solve();
	return 0;
}
