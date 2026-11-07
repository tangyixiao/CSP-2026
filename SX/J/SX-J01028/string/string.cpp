#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],s[200005],ss[200005],sum,ans;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("txt.txt","r",stdin);
//	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],sum+=a[i],s[i]=s[i-1]+a[i],ss[i]=s[i-1]+1;
	int now=0,cnt=0;
	while(cnt<sum/2){
//		cout<<cnt<<'\n';
		int posl=upper_bound(s+1,s+n+1,cnt)-s,posr=lower_bound(ss+1,ss+n+1,sum-cnt+1)-ss-1;
		int l=s[posl],r=ss[posr];
		if(l>sum/2) l=sum/2;
		if(r<sum-sum/2+1) r=sum-sum/2+1;
		if(c[posl]!=c[posr]) ans+=min(l-cnt,sum-cnt+1-r);
		cnt+=min(l-cnt,sum-cnt+1-r);
	}
	cout<<ans;
	return 0;
}