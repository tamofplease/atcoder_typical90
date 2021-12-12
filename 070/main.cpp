#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll N;
vector<int> X, Y;
void input() {
   cin >> N;
   rep(i, N) {
       int x, y;cin >> x >> y;
       X.push_back(x); Y.push_back(y);
   }
}

void solve() {
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    ll x_center_val = 0;
    ll y_center_val = 0;
    if(X.size() % 2 == 0) {
        x_center_val = (X[X.size() / 2] + X[(X.size() - 1) / 2]) / 2;
    } else {
        x_center_val = X[X.size() / 2];
    }
    if (X.size() % 2 == 0) {
        y_center_val = (Y[Y.size() / 2] + Y[(Y.size() - 1) / 2]) / 2;
    } else {
        y_center_val = Y[Y.size() / 2];
    }
    ll ans = 0;
    rep(i, N) {
        ans += abs(X[i] - x_center_val);
        ans += abs(Y[i] - y_center_val);
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
