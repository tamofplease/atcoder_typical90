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
//素数判定
bool isPrime(int num)
{
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else if (num == 3)
		return true;
	else if (num % 2 == 0)
		return false;
	else if (num % 3 == 0)
		return false;
	double sqrtNum = sqrt(num);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
// 約数全列挙
vector<ll> divisor(ll n)
{
	vector<ll> ret;
	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			ret.push_back(i);
			if (i * i != n)
				ret.push_back(n / i);
		}
	}
	sort(ret.begin(), ret.end());
	return ret;
}

int N;

bool isValid(string s)
{
	stack<char> q;
	for (auto c : s)
	{
		if (!q.empty() && q.top() == '(' && c == ')')
		{
			q.pop();
		}
		else
		{
			q.push(c);
		}
	}
	return q.empty();
}

int main()
{
	cin >> N;
	if (N % 2 == 1)
	{
		cout << endl;
	}
	rep(i, (1 << N))
	{
		string tmp = "";
		rep(bit, N) tmp = (i & (1 << bit) ? ")" : "(") + tmp;
		if (isValid(tmp))
		{
			cout << tmp << endl;
		}
	}
	return 0;
}
