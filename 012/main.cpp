#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n) for (int i = 1; i <= n; i++)
const ll MOD = 1000000007;

struct UnionFind
{
	vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

	UnionFind(int N) : par(N)
	{ //最初は全てが根であるとして初期化
		for (int i = 0; i < N; i++)
			par[i] = i;
	}

	int root(int x)
	{ // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
		if (par[x] == x)
			return x;
		return par[x] = root(par[x]);
	}

	void unite(int x, int y)
	{					  // xとyの木を併合
		int rx = root(x); // xの根をrx
		int ry = root(y); // yの根をry
		if (rx == ry)
			return;	  // xとyの根が同じ(=同じ木にある)時はそのまま
		par[rx] = ry; // xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
	}

	bool same(int x, int y)
	{ // 2つのデータx, yが属する木が同じならtrueを返す
		int rx = root(x);
		int ry = root(y);
		return rx == ry;
	}
};

int W, H, Q;
int x[4] = {0, 1, -1, 0};
int y[4] = {1, 0, 0, -1};
int main()
{
	cin >> H >> W >> Q;
	vector<vector<int>> matrix(H, vector<int>(W, 0)); // matrix[H][W];
	UnionFind tree(W * H + 1);
	rep(i, Q)
	{
		int q;
		cin >> q;
		if (q == 1)
		{
			int r, c;
			cin >> r >> c;
			r--;
			c--;
			matrix[r][c] = 1;
			int num = r * W + c;
			rep(j, 4)
			{
				int nx = x[j] + c;
				int ny = y[j] + r;
				if (nx >= 0 && nx < W && ny >= 0 && ny < H && matrix[ny][nx] == 1)
					tree.unite(num, ny * W + nx);
			}
			continue;
		}
		int ra, ca, rb, cb;
		cin >> ra >> ca >> rb >> cb;
		ra--;
		ca--;
		rb--;
		cb--;
		int num_a = ra * W + ca;
		int num_b = rb * W + cb;
		if (matrix[ra][ca] != 1 || matrix[rb][cb] != 1)
		{
			cout << "No" << endl;
			continue;
		}
		cout << (tree.same(num_a, num_b) ? "Yes" : "No") << endl;
	}
	return 0;
}
