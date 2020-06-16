#pragma once
class Solution {
public:
	/**
	 * ʵ�ַ���
	 * @param m int���� ����m����
	 * @param n int���� ���n����
	 * @return int����
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
		if (t == 1) return true;//������ڣ��ͷ���true
		return used[ID((tx + sx) / 2, (ty + sy) / 2)];//����������ڣ������м�ڵ��Ƿ��ʹ��˵Ļ�
	}
	void dfs(int x, int k) {
		if (k >= M && k <= N)
			total++;
		if (k >= N)
			return;
		used[x] = 1;
		for (int i = 1; i <= 9; i++)
			if (!used[i] && check(x, i))//���û���ʹ������ҿ��Թ���һ��·���Ļ�
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
