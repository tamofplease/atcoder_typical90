#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
const int MAXN = 110000;
int A[46], B[46], C[46];
void input() {
   cin >> N;
   rep(i, N) {
       int a; cin >> a;
       A[a%46] += 1;
   }
   rep(i, N) {
       int b;cin >> b;
       B[b%46] += 1;
   }
   rep(i, N) {
       int c; cin >> c;
       C[c%46] += 1;
   }
}

void solve() {
    ll ans = 0;
    rep(i, 46) {
        rep(j, 46) {
            rep(k, 46) {
                if((i + j + k) % 46 == 0) {
                    ans += (ll)(A[i]) * B[j] * C[k];
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
