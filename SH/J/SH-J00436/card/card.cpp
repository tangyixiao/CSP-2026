#include <iostream>
#include <memory.h>
int n, m;
int cards[1000001];
int lst_appeared[1000001];
int app[1000001];
int queue[1000001];
int head, tail; 
int ans[1000001];
bool flag_special = true;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		std::cin >> cards[i];
		lst_appeared[cards[i]] = i;
		if (cards[i] < cards[i - 1]) flag_special = false;
	}
	if (flag_special) {
		for (int i = 1; i <= m; i++) {
			std::cout << lst_appeared[i] << " ";
		}
		std::cout << "\n";
		return 0;
	}
	for (int j = 1; j <= n; j++) {
		head = 1, tail = 1;
		memset(app, 0, sizeof(app));
		for (int i = j; i <= n; i++) {
			if (app[cards[i]] <= tail && queue[app[cards[i]]] == cards[i]) {
				tail = app[cards[i]];
			}
			else {
				tail++;
				queue[tail] = cards[i];
				app[cards[i]] = tail;
			} 
		}
		for (int i = head; i <= tail; i++) {
			ans[queue[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		std::cout << ans[i] << " ";
	}
	std::cout << "\n";
	return 0;
}
