#include <bits/stdc++.h>

int n, total, ans = -1;
int a[200005];
bool visited[200005];

void DFS(int result, int chosen)
{
	if (chosen > total)
		return;
	if (chosen == total)
	{
		ans = std::max(ans, result);
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == false)
		{
			visited[i] = true;
			DFS(result & a[i], chosen + 1);
			visited[i] = false;
		}
	}
}

int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

	std::cin >> n >> total;
	for (int i = 1; i <= n; i++)
		std::cin >> a[i];
	DFS(~0, 0);
	std::cout << ans;
    return 0;
}
