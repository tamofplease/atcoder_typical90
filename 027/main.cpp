#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
set<string> S;
vector<int> ans;
void input() {
    cin >> N;
    Rep(i, N) {
        string a;cin >> a;
        auto it = S.find(a);
        if(it == S.end()) {
            ans.push_back(i);
            S.insert(a);
        }
    }
}

void solve() {
    int la = ans.size();
    rep(i, la) {
        cout << ans[i] << endl;
    }
}

int main(){
    input();
    solve();
    return 0;
}
