#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll N, K;
void input() {
   cin >> N >> K; 
}

int binpower(int a, ll b) {
    int ans = 1;
    while(b!=0) {
        if (b % 2 == 1) {
            ans = (ll)(ans) * a % MOD;
        }
        a = (ll)(a) * a % MOD;
        b /= 2;
    }
    return ans;
}

void solve() {
    if(K == 1) {
        cout << (N == 1 ? 1 : 0) << endl;
        return;
    }
    if (N == 1) {
        cout << K << endl;
        return;
    }
    if (N == 2) {
        cout << (K * (K-1)) % MOD << endl;
        return;
    }
    cout << (ll)(K) * (K-1) % MOD * binpower(K-2, N-2) % MOD << endl;
}

int main(){
    input();
    solve();
    return 0;
}
