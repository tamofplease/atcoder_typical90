#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
const int MAXN = 110;
int A[MAXN][MAXN];
void input() {
   cin >> N ;
   rep(i, N) rep(j, 6) cin >> A[i][j];
}

void solve() {
    ll ans = 1;
    rep(i, N) {
        ll tmp = 0;
        rep(j, 6) {
           tmp += A[i][j];
        }
        tmp %= MOD;
        ans *= tmp;
        ans %= MOD;
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
