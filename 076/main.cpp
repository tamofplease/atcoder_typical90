#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
const int MAXN = 110000;
ll A[MAXN];
ll border = 0;
void input() {
    cin >> N;
    rep(i, N) {
       cin >>A[i];
    }
}

void solve() {
    rep(i, N) border += A[i];
    if(border % 10 != 0) {
        cout << "No" << endl;
        return;
    }
    border /= 10;
    ll tmp = 0;
    ll bottom = 0;
    for(int i=0;i<2*N; i++) {
        int j = i % N;
        while(tmp > border) {
            tmp -= A[bottom];
            bottom += 1;
            bottom %= N;
        }
    }
    while(tmp <) 
}

int main(){
    input();
    solve();
    return 0;
}
