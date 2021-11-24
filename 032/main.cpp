#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;

int A[11][11];
int N, M;
vector<int> m[11];

void input() {
    cin >> N;
    Rep(i, N) Rep(j, N) {
        cin >> A[i][j];
    }
    cin >> M;
    rep(i, M){
        int x,y;cin >> x >> y;
        m[x].push_back(y);
        m[y].push_back(x);
    }

}

void solve() {
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);
    int ans = 10000000;
    do {
        int prev = -1;
        int res = 0;
        bool ok = true;
        int cnt = 1;
        for (auto x : v) {
            if(prev != -1){
                auto cursor = find(m[prev].begin(), m[prev].end(), x);
                if(cursor != m[prev].end()){
                    ok = false;
                    break;
                }
            }
            res += A[x][cnt];
            prev = x;
            cnt += 1;
        }
        if(ok) {
            ans = min(ans, res);
        }
    }
    while(next_permutation(v.begin(), v.end()));
    if (ans == 10000000) {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
