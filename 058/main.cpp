#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll N, K;
const int MAXN = 110000;
ll encounts[MAXN];
void input() {
  cin >> N >> K; 
  rep(i, MAXN) encounts[i] = -1;
}

void make_next() {
    ll tmp = N;
    while(tmp > 0) {
        N += tmp % 10;
        tmp /= 10;
    }
    N %= 100000;
}

void solve() {
    ll initialN = N;
    encounts[N] = 0;
    ll cnt = 0;
    while(true)  {
        make_next();
        cnt++;
        if (encounts[N] >= 0) {
            if (cnt == 1) {
                cout << initialN << endl;
                return;
            }
            break;
        }
        encounts[N] = cnt;
    }
    if(K > cnt) {
        K -= encounts[N];
        K %= (cnt - encounts[N]);
    }else{
        N = initialN;
    }
    rep(i, K) {
        make_next();
    }
    cout << N << endl;
}

int main(){
    input();
    solve();
    return 0;
}
