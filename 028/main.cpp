#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N;
int table[1100][1100];
int ans[110000];
void input() {
    cin >> N;
    Rep(i, N) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        table[x1][y1] += 1; table[x2][y2] += 1;
        table[x1][y2] -= 1; table[x2][y1] -= 1;
    }

    rep(i, 1001) {
        rep(j, 1001) {
           table[i][j] += table[i][j-1];
        }
    }
    rep(i, 1001) {
        rep(j, 1001) {
            table[j][i] += table[j-1][i];
        }
    }
    rep(i, 1001) {
        rep(j, 1001) {
            ans[table[i][j]] += 1;
        }
    }
    Rep(i, N) {
        cout << ans[i] << endl;
    }
}


int main(){
    input();
    return 0;
}
