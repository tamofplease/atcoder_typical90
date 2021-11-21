#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)

vector<int> A, B;

int N;

int main()
{
	cin >> N;
	rep(i, N)
	{
		int a;
		cin >> a;
		A.push_back(a);
	}
	rep(i, N)
	{
		int b;
		cin >> b;
		B.push_back(b);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	ll ans = 0;
	rep(i, N)
	{
		ans += abs(A[i] - B[i]);
	}
	cout << ans << endl;
	return 0;
}
