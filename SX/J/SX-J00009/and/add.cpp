#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200010];
vector<int> b[35];//存储一下那些可以改变结果的命运
bool flag[200010], flag2[200010];
int a2[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	sort(a + 1, a + n + 1, greater<int>());
	for (int i = 1; i <= n; i++)
		a2[i] = a[i];
	if (m == 1)
		printf("%d", a[1]), exit(0);
	for (int i = 1; i <= n; i++) {
		vector<int> s;
		while (a[i])
			s.push_back(a[i] % 2), a[i] /= 2;
		for (int j = 0; j < s.size(); j++)
			if (s[j] == 1)
				b[j + 1].push_back(i);
	}
	for (int i = 1; i <= n; i++)
		flag[i] = 1;
	for (int i = 30; i >= 1; i--) {
		for (int i = 1; i <= n; i++)
			flag2[i] = flag[i];
		int num1 = 0; //表示当前的b[i]在哪里呢
		int num2 = 0;
		for (int j = 1; j <= n; j++) {
			if (num1 < b[i].size() && b[i][num1] == j)
				flag[j] &= 1, num1++;
			else
				flag[j] &= 0;
			num2 += (int)flag[j];
		}
		if (num2 < m)
			for (int i = 1; i <= n; i++)
				flag[i] = flag2[i];
//		for (int i = 1; i <= n; i++)
//			printf("%d ", flag[i]);
//		printf("\n");
	}
	int ans = -1;
	for (int i = 1; i <= n; i++) {
		if (flag[i] && ans != -1)
			ans &= a2[i];
		else if (flag[i])
			ans = a2[i];
//		printf("%d\n", ans);
	}
	printf("%d", ans);
	return 0;
}
//按位与只有2个都是1时结果才是1，所以这道题的想法是我们先拆分一下每个a，而且a的二进制不超过30为
//拆完了我们看最高位，希望让最高位选到偶数个，但是又看到我们的次高位可能会影响到最高位，所以我们又要选不太会影响最高位的，如果还是影响，那就把这个书删掉
//但是假如删完了又不够了咋办？二进制从低往高往回与
//应该是这道的最优解了
//谔谔，饭饭

//哎，不对，这道题是不是要用到动态规划，我想想

//好像发现似乎如果这个里面含有0，那么似乎这么一大个就全是0，我想想

//最终结论：选的m个数里的这个位置必须全是1才能生效，否则就肯定是0
//但是怎么才能让其捡了芝麻不丢西瓜呢
//存储一个t数组，里面维护一下所有不会让代码见了芝麻丢西瓜的下标，然后当我们到这里的时候，先看b的长度有没有超过m，如果没有，那自然不用看，如果也有，检查是否会出现丢下西瓜的问题，如果有情况让这个情况不发生，那么我们就采取这个情况
//有没有数字能既满足以前的，又满足现在，但是加入处理这处理这处理成<m了咋办
//那就说明这个条件会让其他情况变差

//在11：38：15秒终于写完了前3道