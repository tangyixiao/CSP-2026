#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int a[N],cnt[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		int maxx=-1;
		for(int i=1;i<=n;i++)
			maxx=max(maxx,a[i]);
		cout<<maxx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
		cnt[a[i]]++;
		int maxx=-1;
		for(int i=1;i<=n;i++)
			maxx=max(maxx,a[i]);
		for(int i=maxx;i>=0;i--){
			if(cnt[i]>=m){
				cout<<i;
				return 0;
			}
		}	
	}
	if(n==m){
		int ans=a[1]&a[2];
		for(int i=3;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	bool ok;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i]!=a[j]){
				ok=1;
				break;
			}
	if(ok==0){
		cout<<a[1];
		return 0;
	} 
	for(int i=1;i<=n;i++)
		cnt[a[i]]++;
	int maxx=-1;
	for(int i=1;i<=n;i++)
		maxx=max(maxx,a[i]);
	for(int i=maxx;i>=0;i--){
		if(cnt[i]>=m){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
/*
a[i]<=4

0&0=0;$
0&1=0;$
0&2=0;$
0&3=0;$
0&4=0;$

1&1=1;
1&2=0;$
1&3=1;
1&4=0;$

2&2=2;
2&3=2;
2&4=0;$

3&3=3;$
3&4=0;$

4&4=4;$
*/