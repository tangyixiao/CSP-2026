#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[300005];
stack <int> b;
bool ha[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	int t1=n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int k=1; k<=n; k++) {
		for(int i=k; i<=n; i++) {
			if(ha[a[i]]) {
				while(b.top()!=a[i]) {
					ha[b.top()]=0;
					b.pop();
				}
				b.pop();
			}
			b.push(a[i]);
			ha[a[i]]=1;
		}
		for(int i=1; i<=m; i++) {
			if(ha[i]) ans[i]++;
		}
		memset(ha,0,sizeof(ha));
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<' ';
	}
	return 0;
}
