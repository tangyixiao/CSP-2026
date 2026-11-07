#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500500];
bool cnt[300300];
int ans[300300];
void SP() {
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) cnt[j]=0;
		stack<int> st;
		for(int j = i;j <= n;j++) {
			if(cnt[a[j]]) {
				while(st.top()!=a[j]) {
					cnt[st.top()]=0;
					st.pop();
				}
			}else {
				cnt[a[j]]=1;
				st.push(a[j]);
			}
		}
		for(int j = 1;j <= m;j++) {
			if(cnt[j]) ans[j]++;
		}
	}
	for(int i = 1;i <= m;i++) cout << ans[i] << " ";
}
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	if(n<=5000) SP();
	else {
		cout << "卜算子·夜行" << endl;
		cout << "星只知拥月，花亦争奇巧。" << endl;
		cout << "夜半孤行怅惘时，幽影独缥缈。" << endl;
		cout << "更定旅人稀，心志无人了。" << endl;
		cout << "谁可与我共释愁，只恨知音少。" << endl;
	}
	return 0;
}
/*
本题计划48分
100+100+75+48=323
一等应该有罢
别无所求了 
*/
