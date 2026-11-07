#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N = 2e5 + 5;
int n,m,flag,ans;
int a[N];
bool if_xz_A(int x){
	while (x != 1){
		if (x % 2 == 0) return false;
	}
	return true;
}
void dfs(int k,int deep,int sum){
	if (deep == n + 1){
		return;
	}
	if (k == m + 1){
		ans = max(ans,sum);
		return;
	}
	if (k + n - deep < m) return;
	dfs(k + 1,deep + 1,sum & a[deep]);
	dfs(k,deep + 1,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d",&n,&m);
	if (m == 1) flag = 1;
	else if (m == n) flag = 2,ans = 0x3f3f3f3f;
	else if (m == n - 1) flag = 3;
	for (int i = 1; i <= n; i++){
		scanf("%d",&a[i]);
		if (flag == 1) ans = max(ans,a[i]);
		if (flag == 2) ans &= a[i];
	}
	if (flag == 1 || flag == 2){
		cout << ans;
		return 0;
	}
	if (flag == 3){
		for (int i = 1; i <= n; i++){
			int temp = 0x3f3f3f3f;
			for (int j = 1; j <= n; j++){
				if (j == i) continue;
				temp &= a[j];
			}
			ans = max(ans,temp);
		}
		cout << ans;
	}
	for (int i = 1; i <= n; i++){
		if (a[i] == i - 1) flag = 5;
		else if (if_xz_A(a[i])) flag = 4;
		else break;
	}
	if (flag == 4){
		int temp = 0,hx[N] = {0},k = 0;
		for (int i = 1; i <= n; i++){
			temp = max(temp,a[i]);
			hx[i]++;
		}
		for (int i = temp; i >= 0; i--){
			if (hx[i]){
				k++;
				if (k == m){
					cout << i;
					return 0;
				}
			}
		}
	}
	if (flag == 5){
		for (int i = n; i >= n - m + 1; i--){
			ans &= a[i];
		}
		cout << ans;
	}
	dfs(0,1,0x3f3f3f3f);
	cout << ans;
	return 0;
}