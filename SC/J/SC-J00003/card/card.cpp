#include<bits/stdc++.h>
using namespace std;

int ans[300005];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	int firstappear[m + 1];
		
	struct card {
		int num;
		int next;
	};
	
	card c[n + 1];
	
	c[0].num = 0;
	c[0].next = 1;
	
	for (int i = 1;i <= n;i++) {
		cin >> c[i].num ;
		c[i].next = i + 1 ;
	}
	
	for (int j = 1;j <= n;j++) {
		memset(firstappear,-1,sizeof(firstappear));
		card tempc[n + 1];
		for (int q = 0;q <= n;q++) {
			tempc[q].num = c[q].num;
			tempc[q].next = c[q].next;
		}
		int p = j - 1;
		for (int i = j;i <= n;i++) {
			if (firstappear[c[i].num] == -1) {
				firstappear[c[i].num] = i;
			}
			else {
				tempc[firstappear[c[i].num] - 1].next = i;
			}
		}
		while (p < n) {
			p = tempc[p].next;
			ans[c[p].num] += 1;
		}
	}
	
	for (int i = 1;i <= m;i++)
		cout << ans[i] << " ";
	
	return 0;
}