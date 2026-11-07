#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll a[N],ans=pow(2,31)-1,x=-1;
int n,m,b[50],c[50],cnt[50],id;
bool vis[N];
int f(ll x,ll y){
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(cnt,0,sizeof(cnt));
	int k=0,k1=0,k2=0,g=0;
	ll sum=0;
	while(x>0){
		b[++k]=x%2;
		x/=2;
	}
	while(y>0){
		c[++k1]=y%2;
		y/=2;
	}
	for(int i=1;i<=min(k,k1);i++){
		if(b[i]==1&&c[i]==1)cnt[++k2]=1;
		else cnt[++k2]=0;
	} 
	for(int i=1;i<=k2;i++){
		sum+=pow(2,g)*cnt[i];
		g++;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=m;j++){
		x=-1;
		for(int i=1;i<=n;i++){
			if(vis[i]==0&&f(a[i],ans)>x){
				x=f(a[i],ans);
				id=i;
			}
		}
		vis[id]=1;
		ans=x;
	}
	cout<<ans;
	return 0;
}
