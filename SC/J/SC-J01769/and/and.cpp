#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define fi first
#define se second
using namespace std;
const int maxn=2e5+10;
const double dlt=0.993;
int n,m;
int a[maxn],p[maxn];
int calc(){
	int res=p[1];
	for(int i=2;i<=m;i++) res&=p[i];
	return res;
}
int ans;
void SA(){
	double t=2000;
	int cur=calc(); ans=max(ans,cur);
	while(t>1e-14){
		int l=rand()%n+1,r=rand()%n+1;
		while(l==r) r=rand()%n+1;
		swap(p[l],p[r]);
		int now=calc();
		double d=now-cur;
		if(d>0) cur=now,ans=max(ans,cur);
		else{
			if(exp(d/t)*RAND_MAX>rand()) cur=now;
			else swap(p[l],p[r]);
		}
		t*=dlt;
	}
}
void solve(){
	while((double)clock()/CLOCKS_PER_SEC<=0.95) SA();
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	srand(19491001); srand(rand());
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],p[i]=a[i];
	if(n<=2000){
		solve();
		cout<<ans;
	}
	else{
		sort(a+1,a+n+1,cmp);
		int ans=a[1];
		for(int i=2;i<=m;i++) ans&=a[i];
		cout<<ans;
	}
	return 0;
}
/*
4 2
3 15 12 12
*/