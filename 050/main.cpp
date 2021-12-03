#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, L;
const int MAXN = 210000;
void input()
{
    cin >> N >> L;
}

int dp[MAXN];
void solve() {
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    rep(i, N) {
        dp[i+1] += dp[i];
        dp[i+1] %= MOD;
        dp[i+L] += dp[i];
        dp[i+L] %= MOD;
    }
    cout << dp[N] << endl;
}

int main(){
    input();
    solve();
    return 0;
}
