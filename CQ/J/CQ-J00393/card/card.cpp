#include<bits/stdc++.h>
#define int long long
#define N 500001
#define M 300001
using namespace std; 
int n,m;
int a[N];
int mp[N];
int now[N];
int cnt[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int T=1;T<=n;T++){
		int ed=1;
		for(int i=1;i<=m;i++) mp[i]=-1;
		for(int i=1;i<=n;i++) now[i]=0;
		for(int i=T;i<=n;i++){
			if(mp[a[i]]<ed&&mp[a[i]]!=-1&&now[mp[a[i]]]==a[i]) ed=mp[a[i]]+1; 
			else mp[a[i]]=ed,mp[now[ed]]=-1,now[ed++]=a[i];
//			for(int i=1;i<ed;i++) cout<<now[i]<<' ';
//			cout<<"\n";
		}
		for(int i=1;i<ed;i++) cnt[now[i]]++;
//		cout<<"\n";
	} 
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
