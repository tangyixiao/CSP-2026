/*

it was too late to apologize 
it was toooo lateeee ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

csp j 预计得分 330

还是太难了 建议所有题目都是入门题

ccf我爱你 让我 1= 吧
ccf我爱你 让我 1= 吧
ccf我爱你 让我 1= 吧
ccf我爱你 让我 1= 吧
ccf我爱你 让我 1= 吧

csp j/s rp++++++++++++++++++++++++++;

总结语下午csp s t4再写 

*/ 

#include <iostream>
#include <cstring>

using namespace std;

const int N = 5e5 + 10;

int n, m, a[N], ans[N], fff[N], q[N], lst[N]; 

void solve1() {
	for (int i = 1; i <= n; i++) {
		while (i + 1 <= n && a[i + 1] == a[i]) i++;
		ans[a[i]] = i;
//		cout << i << "\n";
	}
//	cout << "1\n";
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	cout << "\n";
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	bool flag = 1; 
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) flag = 0;
	}
	if (flag) {
		solve1();
		return 0;
	}
	for (int start = 1; start <= n; start++) {
		memset(lst, 0, sizeof lst);
		memset(fff, 0, sizeof fff);
		int head = 1, tail = 0;
		for (int i = start; i <= n; i++) {
			if (lst[a[i]] && lst[a[i]] <= tail) {
				tail = lst[a[i]];
			} else if (!lst[a[i]]){
				q[++tail] = a[i];
				lst[a[i]] = tail;
			} 	
		}
		for (int i = head; i <= tail; i++)
			ans[q[i]] += (fff[q[i]] == 0), fff[q[i]] = 1;
//		if (fff[3] == 1) cout << start << " ";
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
