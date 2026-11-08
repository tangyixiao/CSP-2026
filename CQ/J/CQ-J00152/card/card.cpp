#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10, M=3e5+10;
int n, m;
int a[N];
int ans[M];
int st[N], top;
bool vis[N];
bool f[M];
bool flag=1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	for(int i=1; i<n; i++)
		if(a[i]>a[i+1]) {
			flag=0;
			break;
		}
	if(flag) {
		for(int i=1; i<=m; i++)
			cout<<1<<" ";
		return 0;
	}
	for(int i=1; i<=n; i++) {
		memset(f, 0, sizeof f);
		top=0;
		for(int j=i; j<=n; j++) {
			if(!f[a[j]]) {
				st[++top]=a[j];
				f[a[j]]=1;
			}
			else {
				do {
					f[st[top]]=0;
					top--;
				} while(top>=0 && st[top]!=a[j]);
				f[st[top]]=0;
				top--;
				st[++top]=a[j];
				f[a[j]]=1;
			}
		}
		for(int i=1; i<=top; i++)
			ans[st[i]]++;
	}
	for(int i=1; i<=m; i++)
		cout<<ans[i]<<" ";
	return 0;
}
