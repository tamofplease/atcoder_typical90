#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll N;
void input() {
   cin >> N; 
}

void solve() {
    int res = 0;
    ll ord_n = N;
    for(ll i=2;i*i<=ord_n;i++) {
        while(N%i==0) {
            res += 1;
            N /= i;
        }
        if(N == 1) {
            break;
        }
    }
    res += (N > 1) ? 1 : 0;
    ll tmp = 1;
    ll ans = 0;
    while(tmp < res) {
        tmp *= 2;
        ans += 1;
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
