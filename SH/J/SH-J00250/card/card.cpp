#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500009];
long long ans[300009];
int ed[300009];
map<int,int> mp;

int main ()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		ed[a[i]]=i;
	}
	
	for (int i=1; i<=n; i++) {
		if (i!=ed[a[i]]) {
			mp[i]=ed[a[i]];
		}
	}
	
	for (int i=1; i<=n; i++) {
		int cur=i;
		while (cur<=n) {
			
			if (mp[cur]!=0) {
				cur=mp[cur];
			}
			
			else {
				ans[a[cur]]++;
				cur++;
			}
		}
		
	}
	
	for (int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
