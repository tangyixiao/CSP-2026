# include <set>
# include <cstdio>
# include <vector>

# define maxn 200010
std::multiset<int> a;
std::vector<int> cnt2[50];
int n, m, x, id, ans, cnt1[50];

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		a.insert(x);
		for (int j = 0; j <= 29; j++)
			if (((x >> j) & 1))
				cnt1[j] ++;
			else
				cnt2[j].push_back(x);
	}

	for (int i = 29; i >= 0; i--) {
		if (cnt1[i] < m)
			continue;
		ans += (1 << i);
		while (!cnt2[i].empty()) {
			x = cnt2[i].back();
			cnt2[i].pop_back();
			if (a.find(x) == a.end())
				continue;
			a.erase(a.find(x));
			for (int j = 0; j <= 29; j++)
				if (((x >> j) & 1))
					cnt1[j] --;
		}
	}

	printf("%d\n", ans);

	fclose(stdin);
	fclose(stdout);

	return 0;

}
