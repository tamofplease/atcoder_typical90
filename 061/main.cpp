#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int Q;
const int MAXQ = 110000;
int t[MAXQ], x[MAXQ];
map<int, int> deck;
int top = 0;
int bottom = -1;
void input() {
   cin >> Q;
   rep(i, Q) {
       cin >> t[i] >> x[i];
   }
}

void solve() {
    rep(i, Q) {
        if(t[i] == 1) {
            deck[top++] = x[i];
        } else if (t[i] == 2) {
            deck[bottom--] = x[i];
        } else {
            if(x[i] <= top) {
                cout << deck[top-x[i]] << endl;
            } else {
                x[i] -= top;
                cout << deck[-1 * x[i]] << endl;
            }
        }
    }
}

int main(){
    input();
    solve();
    return 0;
}
