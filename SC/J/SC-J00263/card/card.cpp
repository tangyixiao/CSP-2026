#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N]= {};
int ans[N]= {};
int f[N]= {};
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		stack<int>s;
		for(int j=i; j<=n; j++) {
			s.push(a[j]);
			if(f[a[j]]==1) {
				while(s.top()!=a[j]&&!s.empty()) {
					s.pop();
					f[s.top()]=0;
				}
			}
			f[a[j]]=1;
		}
		while(!s.empty()) {
			f[s.top()]=0;
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}