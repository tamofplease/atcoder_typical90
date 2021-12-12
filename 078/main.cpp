#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll N, M;
vector<vector<ll>> G(110000);
void input() {
    cin >> N >> M;
    rep(i, M) {
        int a,b;cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
}

void solve() {
    ll ans = 0;
    rep(i, N) {
        ll mi = 0;
        for(auto j : G[i]){
            if(j < i) mi++;
        }
        if(mi == 1) ans++;
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
