#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
int a[maxn];
int pre[maxn],suf[maxn];
int rnk[maxn*2];
char c[maxn];
int n;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int sum=0;
	int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];cin>>c[i];
		sum+=a[i];
		pre[i]=pre[i-1]+a[i];
		rnk[i]=pre[i];
	}
	for(int i=n;i>=1;i--){
		suf[i]=suf[i+1]+a[i];
		rnk[i+n]=suf[i];
	}sort(rnk+1,rnk+2*n+1);
	sort(suf+1,suf+n+1);
	sum/=2;
	int cur=0;
	for(int i=1;rnk[i]<=sum;i++){
		int l=lower_bound(pre+1,pre+n+1,rnk[i])-pre;
		int r=lower_bound(suf+1,suf+n+1,rnk[i])-suf;
		if(c[l]!=c[n-r+1])ans+=rnk[i]-rnk[i-1];
	}cout<<ans<<endl;
	return 0;
}
