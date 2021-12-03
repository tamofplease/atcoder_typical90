#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, K;
const int MAXN = 220000;
typedef pair<int, int> p;
int B[MAXN];
int done[MAXN];
priority_queue<p, vector<p>> pq;
void input() {
    cin >> N >> K;
    rep(i, N) {
        int a, b; cin >> a >> b;
        pq.push(make_pair(b, i));
        B[i] = a - b;
        done[i] = 0;
    }
}

void solve() {
    int cnt = 0;
    ll ans = 0;
    while(true) {
        p val = pq.top(); pq.pop();
        if(done[val.second] == 2) {
            continue;
        }
        ans += val.first;
        if (done[val.second] == 0)
        {
            pq.push(make_pair(B[val.second], val.second));
        }
        done[val.second] += 1;
        if (++cnt == K)
        {
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
