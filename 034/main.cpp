#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
int N, K;
vector<int> A;
void input() {
    cin >> N >> K;
    rep(i, N) {
        int a; cin >> a;
        A.push_back(a);
    }
}

void solve() {
    // 現在見ている値と、その回数のcount保持
    map<int, int> cnt = {};

    // 現在見ているあたいの組み合わせ保持
    set<int> cur = {};

    int ans = 0;
    int tail = 0;
    rep(i, N) {
        // 値が既に存在していた場合。
        if (cur.find(A[i]) != cur.end()) {
            cnt[A[i]]++;
            ans = max(ans, i - tail + 1);
            continue;
        }

        // 値が既に存在しなかった場合。
        if(cur.size() == K) {
            // 取得できる上限に達していた場合。
            while(true) {
                cnt[A[tail]]--;
                if(cnt[A[tail]] == 0){
                    cur.erase(A[tail]);
                    ++tail;
                    break;
                }
                tail++;
            }
        }
        cur.insert(A[i]);
        cnt[A[i]] = 1;
        ans = max(ans, i - tail + 1);
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}
