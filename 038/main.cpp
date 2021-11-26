#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
ll border = 1e18;
ll A, B;
void input() {
   cin >> A >> B; 
}

void solve() {
    ll res = gcd(A, B);
    A /= res;
    if(A > (border / B)) {
        cout << "Large" << endl;
        return;
    }
    cout << A * B << endl;
}

int main(){
    input();
    solve();
    return 0;
}
