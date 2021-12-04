#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, P, Q;
const int MAXN = 110;
ll A[MAXN];
void input() {
   cin >> N >> P >> Q;
    rep(i, N){
        cin >> A[i];
        A[i] %= P;
    }
}

void solve() {
    ll ans = 0;
    rep(i, N) {
        rep(j, i) {
            ll a = A[i] * A[j];
            a %= P;
            rep(k, j) {
                ll b = a * A[k];
                b %= P;
                rep(l, k) {
                    ll c = b * A[l];
                    c %= P;
                    rep(m, l) {
                        ll d = c * A[m];
                        d %= P;
                        if (d == Q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
