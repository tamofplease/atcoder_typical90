#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int H, W;
void input() {
   cin >> H >> W;
   H--; W--; 
}

void solve() {
    if(H == 0 || W == 0) {
        cout << max(H+1, W+1) << endl;
        return;
    }
    int r, c;
    r = H / 2 + 1;
    c = W / 2 + 1;
    cout << r * c << endl;
}

int main(){
    input();
    solve();
    return 0;
}
