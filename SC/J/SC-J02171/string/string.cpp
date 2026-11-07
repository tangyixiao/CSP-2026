#include<bits/stdc++.h>
using namespace std;
long long n, num[200005], pre[200005];
char c[200005];
int main(){
	ios::sync_with_stdio(false);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int write = 0;
	for(int i = 1; i <= n; i++){
		int tnum;
		char tc;
		scanf("%d %c", &tnum, &tc);
		if(tc == c[write]) num[write] += tnum;
		else{
			write++;
			c[write] = tc;
			num[write] = tnum;
		}
	}
	for(int i = 1; i <= write; i++){
		pre[i] = pre[i-1] + num[i];
	}
	int posq = 1, posh = write, ans = 0;
	for(int iq = 1, ih = pre[write]; iq < ih;){
		int d = min(pre[posq] - iq+1, ih - pre[posh-1]);
		if(c[posq] != c[posh]){
			ans += d;
		}
		iq += d;
		ih -= d;
		if(iq > pre[posq]) posq++;
		if(ih <= pre[posh-1]) posh--; 
	}
	cout << ans;
	return 0;
}