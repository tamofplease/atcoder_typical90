#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, Q;
int currentTop = 0;
const int MAXN = 220000;
int A[MAXN];
void input() {
   cin >> N >> Q; 
   rep(i,N) cin >> A[i];
}

void solve() {
    int t, x, y; cin >> t >> x >> y;
    x = (N - currentTop + x - 1) % N;
    if (t == 1) {
        y = (N - currentTop + y - 1) % N;
        return swap(A[x], A[y]);
    }
    if(t == 2) {
        currentTop = ++currentTop % N;
        return;
    }
    cout << A[x] << endl;
}

int main(){
    input();
    rep(i, Q) {
        solve();
    }
    return 0;
}
