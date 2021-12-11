#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, Q;
const int MAXN = 110000;
const int MAXQ = 110000;
ll A[MAXN];
ll B[MAXN];
int L[MAXQ], R[MAXQ], V[MAXQ];
void input() {
    cin >> N >> Q;
    Rep(i, N) cin >> A[i];
    Rep(i, Q) cin >> L[i] >> R[i] >> V[i];
}

void solve() {
    ll tmp = 0;
    Rep(i, N - 1) {
        B[i] = A[i+1] - A[i];
        tmp += abs(B[i]);
    }

    Rep(i, Q) {
        ll before = abs(B[L[i] - 1]) + abs(B[R[i]]);
        if(L[i] >= 2) B[L[i] - 1] += V[i];
        if(R[i] < N ) B[R[i]] -= V[i];
        ll after = abs(B[L[i] - 1]) + abs(B[R[i]]);
        tmp += (after - before);
        cout << tmp << endl;
    }

    
}

int main(){
    input();
    solve();
    return 0;
}
