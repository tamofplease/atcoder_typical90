#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, Q;
const int MAXN = 110000;
const int MAXQ = 110000;
ll A[MAXN];
int L[MAXQ], R[MAXQ], V[MAXQ];
void input() {
    cin >> N >> Q;
    rep(i, N) cin >> A[i];
    rep(i, Q) cin >> L[i] >> R[i] >> V[i];
}

void solve() {
    ll res = 0;
    rep(i, N-1) res += abs(A[i] - A[i+1]);

    rep(i, Q) {
        
    }
}

int main(){
    input();
    solve();
    return 0;
}
