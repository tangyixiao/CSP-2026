#include<bits/stdc++.h>
using namespace std;

using ll=long long;
const int MAXN=2e5+11;
int n,m;
ll a[MAXN],ans=(1<<30)-1;
int g[31][MAXN],k;
bool bs=0;

bool cmp(ll ni,ll ko){return ni>ko;}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		int j=0;
		ll x=a[i];
		while(x){
			g[i][j++]=x%2;
			x>>=1;
		}
		k=max(k,j-1);
	}
	for(int j=k;j>=0;j--){
		int cnt=0;
		ans=(1<<30)-1;
		for(int i=1;i<=n;i++){
			if(g[i][j]==1){cnt++;ans&=a[i];}
			if(cnt>=m){bs=1;break;}
		}
		if(bs) break;
	}
	cout<<(bs?ans:0)<<"\n";
	return 0;
}