#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, K;
vector<int> A, B;
void input() {
   cin >> N >> K;
   rep(i,N) {
       int a;cin >> a;
       A.push_back(a);
   } 
   rep(i,N) {
       int b;cin >> b;
       B.push_back(b);
   }
}

void solve() {
    int ans = 0;
    rep(i,N) {
        ans += abs(A[i] - B[i]);
    }
    if(ans <= K && (ans - K) % 2 == 0) {
        puts("Yes");
        return;
    }
    puts("No");
}

int main(){
    input();
    solve();
    return 0;
}
