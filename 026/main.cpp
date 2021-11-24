#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
vector<int> v[1 << 18];
int color[1 << 18];
void input() {
    cin >> N;
    rep(i,N-1) {
        int a,b;cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
}

void dfs(int pos, int cur){
    color[pos] = cur;
    for (int i : v[pos]){
        if (color[i] >= 1)
            continue;
        dfs(i, 3 - cur);
    }
}

void search(int cur, int cur_color) {
    color[cur] = cur_color;
    for(auto nxt: v[cur]) {
        if (color[nxt] == -1) {
            search(nxt, 1-cur_color);
        }
    }
}

void solve() {
    // search(1, 1);
    dfs(1, 1);
    vector<int> ans1;
    vector<int> ans2;
    Rep(i, N) {
        if (color[i] == 1) {
            ans1.push_back(i);
        }
        if( color[i] == 2) {
            ans2.push_back(i);
        }
    }
    if(ans1.size() > ans2.size()) {
        rep(i, N/2) {
            if(i) cout << " ";
            cout << ans1[i];
        }
        cout << endl;
    }else {
        rep(i, N/2) {
            if(i) cout << " ";
            cout << ans2[i];
        }
        cout << endl;
    }
}

int main(){
    input();
    solve();
    return 0;
}
