#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n, len, l[N], ans;
char c[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >>n;
	l[1] = 1;
	for(int i=1; i<=n; i++){
		int a;
		cin >>a >>c[i];
		l[i+1] = l[i] + a;
	}
	len = l[n+1] - 1;
	int i = 1, j = n;
	while(i < j){
		// 处理当前
		int j1r = len - l[j] + 1, j1l = len - (l[j+1] - 1) + 1;
		if(c[i] != c[j])
			ans += min(j1r, l[i+1] - 1) - max(j1l, l[i]) + 1;
		// 更新 
		if(j1r <= l[i+1] - 1) j --;
		else i ++;
	}
	cout <<ans <<endl;
	return 0;
}
