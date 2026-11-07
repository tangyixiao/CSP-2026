#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, a[500005], ans[300005];
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	queue <long long> q, p;
	for(int i = 1; i <= n; i ++){
		for(int j = i; j <= n; j ++){
			q.push(a[j]);
			for(int x = 1; x < j; q ++){
				int flag = 0;
				p.push(q.front());
				q.pop();
				if(p.front() == a[j])
					flag = 1;
			}
			if(flag == 0){
				for(int x = 1; x <= j; x ++){
					q.push(q.front());
					p.pop();
				}
			}
		}
		for(int j = 1; j <= n; j ++){
			if(q.front() == j) ans[j] ++;
		}
	}
	for(int i = 1; i <= m; i ++)
		cout << ans[m] << " ";
	return 0;
}