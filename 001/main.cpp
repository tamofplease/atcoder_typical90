#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;
struct edge
{
	int to, weight;
	edge(int to, int weight) : to(to), weight(weight) {}
};
using Graph = vector<vector<int>>;
using GraphEdge = vector<vector<int>>;
long long modinv(long long a, long long m = MOD)
{
	long long b = m, u = 1, v = 0;
	while (b)
	{
		long long t = a / b;
		a -= t * b;
		swap(a, b);
		u -= t * v;
		swap(u, v);
	}
	u %= m;
	if (u < 0)
		u += m;
	return u;
}
// MODの割り算の際にa/＝b;をa *= modinv(b,MOD);とする。
int gcd(int a, int b)
{
	if (a % b == 0)
	{
		return (b);
	}
	else
	{
		return (gcd(b, a % b));
	}
}
int lcm(int a, int b) { return a * b / gcd(a, b); }
#define INF (1 << 30 - 1)
#define LINF (1LL << 60)
#define MAXN 100001

int A[MAXN];
int K, N;

bool ok(int a)
{
	int tmp = 0;
	int cnt = 0;

	rep(i, N + 1)
	{
		int k = A[i];
		tmp += k;
		if (tmp >= a)
		{
			tmp = 0;
			cnt += 1;
		}
	}
	return (cnt > K) ? true : false;
}

int main()
{

	int L;
	cin >> N >> L >> K;

	rep(i, N)
	{
		cin >> A[i];
	}

	A[N] = L;
	for (int i = N; i > 0; i--)
	{
		A[i] = A[i] - A[i - 1];
	}

	int ma = 1000000000;
	int mi = 0;
	while (ma - mi > 1)
	{
		int mid = (ma + mi) / 2;
		(ok(mid) ? mi : ma) = mid;
	}
	printf("%d\n", mi);
	return 0;
}
