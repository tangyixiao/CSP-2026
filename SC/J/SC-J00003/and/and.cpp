#include<bits/stdc++.h>
using namespace std;

bool vis[200005];

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	
	int a[n],temp[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	
	int ans[m];
	memset(ans,-1,sizeof(ans));
	int choose;
	
	for (int i = 0;i < n;i++) {
		if (a[i] > ans[0]) {
			ans[0] = a[i];
			choose = i;
		}
	}
	vis[choose] = true;
	
	for (int j = 1;j < m;j++) {
		for (int i = 0;i < n;i++) {
			if (((ans[j - 1] & a[i]) > ans[j]) && !vis[i]) {
				ans[j] = (ans[j - 1] & a[i]);
				choose = i;
			}
		}
		vis[choose] = true;
	}
	
	cout << ans[m - 1];
}