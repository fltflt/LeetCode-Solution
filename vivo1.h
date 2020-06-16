#pragma once
class Solution {
public:
	/**
	 * 实现方案
	 * @param m int整型 最少m个键
	 * @param n int整型 最多n个键
	 * @return int整型
	 */
	int total = 0, M, N;
	bool used[10];
	int id[10][2] = { {0, 0}, {1, 1}, {1, 2}, {1, 3},
					 {2, 1}, {2, 2}, {2, 3},
					 {3, 1}, {3, 2}, {3, 3} };
	int gcd(int a, int b) {
		return !b ? a : gcd(b, a % b);
	}
	int ID(int x, int y) {
		return (x - 1) * 3 + y;
	}
	bool check(int x, int y) {
		int tx = id[x][0], ty = id[x][1];
		int sx = id[y][0], sy = id[y][1];
		int t = gcd(abs(tx - sx), abs(ty - sy));
		if (t == 1) return true;//如果相邻，就返回true
		return used[ID((tx + sx) / 2, (ty + sy) / 2)];//如果不是相邻，但是中间节点是访问过了的化
	}
	void dfs(int x, int k) {
		if (k >= M && k <= N)
			total++;
		if (k >= N)
			return;
		used[x] = 1;
		for (int i = 1; i <= 9; i++)
			if (!used[i] && check(x, i))//如果没访问过，并且可以构成一条路径的话
				dfs(i, k + 1);
		used[x] = 0;
	}
	int solution(int m, int n) {
		M = m, N = n;
		for (int i = 1; i <= 9; i++)
			dfs(i, 1);
		return total;
		// write code here
	}
};

#pragma once
