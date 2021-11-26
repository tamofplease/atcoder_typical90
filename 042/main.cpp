#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int K;
int dp[110000];
void input() {
   cin >> K; 
}

// X は 9 の倍数
// X を 10 進法で表したときの各桁の数字の和は K
// Xが9-xの倍数、Xを10で表したわは　K-x

// db[i] = 総和がiのものの総数。
void solve() {
    if( K%9 != 0 ) {
        cout << 0 << endl;
        return;
    }

    rep(i, 10) {
        dp[i] = 1;
    }
    dp[0] = 0;

    rep(i, K) Rep(j, 9) {
        dp[i+j] += dp[i];
        dp[i+j] %= MOD;
    }

    cout << dp[K] << endl;
}

int main(){
    input();
    solve();
    return 0;
}
