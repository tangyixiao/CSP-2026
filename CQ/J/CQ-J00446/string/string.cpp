#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[200005];
char c[200005];
int sum[200005];
pair<int,char>ls[200005],rs[200005];
int cntl,cntr;
int ans;
void bfs(){
	int s=1,t=1;
	while(s<=cntl&&t<=cntr){
		if(ls[s].first<rs[t].first){
			if(ls[s].second!=rs[t].second)ans+=ls[s].first;
			rs[t].first-=ls[s].first;
			s++;
		}
		else{
			if(ls[s].second!=rs[t].second)ans+=rs[t].first;
			ls[s].first-=rs[t].first;
			t++;
			if(ls[s].first==0)s++;
		}
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i=-~i)cin>>a[i]>>c[i],sum[i]=sum[i-1]+a[i];
	if(sum[n]&1){
		int x=(sum[n]+1)>>1;
		int l=1,r=n;
		while(l<=r){
			int mid=(l+r)>>1;
			if(sum[mid]<=x)l=mid+1;
			else r=mid-1;
		}
		ls[++cntl]={x-sum[l-1]-1,c[l]};
		for(int i=l-1;i>=1;i=~-i){
			ls[++cntl]={a[i],c[i]};
		}
		rs[++cntr]={sum[l]-x,c[l]};
		for(int i=l+1;i<=n;i=-~i){
			rs[++cntr]={a[i],c[i]};
		}
		bfs();
		cout<<ans;
	}
	else{
		int x=(sum[n]+1)>>1;
		int l=1,r=n;
		while(l<=r){
			int mid=(l+r)>>1;
			if(sum[mid]<=x)l=mid+1;
			else r=mid-1;
		}
		if(x==sum[l]){
			for(int i=l;i>=1;i=~-i){
				ls[++cntl]={a[i],c[i]};
			}
			for(int i=l+1;i<=n;i=-~i){
				rs[++cntr]={a[i],c[i]};
			}
		}
		else{
			ls[++cntl]={x-sum[l-1],c[l]};
			for(int i=l-1;i>=1;i=~-i){
				ls[++cntl]={a[i],c[i]};
			}
			rs[++cntr]={sum[l]-x+1,c[l]};
			for(int i=l+1;i<=n;i=-~i){
				rs[++cntr]={a[i],c[i]};
			}
		}
		bfs();
		cout<<ans;
	}
	return 0;
}
/*
rp++
*/
