#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200010],sum,tot1,tot2,ans,m;
char c[200010];
struct P{
	int val;
	char s;
}a1[200010],a2[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)  cin>>a[i]>>c[i],m+=a[i];
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(sum<=m/2)  a1[++tot1].val=a[i],a1[tot1].s=c[i];
		else{
			if(sum!=m/2+a[i])  a1[++tot1].val=m/2+a[i]-sum,a1[tot1].s=c[i];
			break;
		}
	}
	sum=0;
	for(int i=n;i>=1;i--){
		sum+=a[i];
		if(sum<=m/2)  a2[++tot2].val=a[i],a2[tot2].s=c[i];
		else{
			if(sum!=m/2+a[i])  a2[++tot2].val=m/2+a[i]-sum,a2[tot2].s=c[i];
			break;
		}
	}
	int opt1=1,opt2=1;
	while(opt1<=tot1&&opt2<=tot2){
		if(a1[opt1].s!=a2[opt2].s)  ans+=min(a1[opt1].val,a2[opt2].val);
		int t=min(a1[opt1].val,a2[opt2].val);
		a1[opt1].val-=t,a2[opt2].val-=t;
		if(a1[opt1].val==0)  opt1++;
		if(a2[opt2].val==0)  opt2++;
	}
	cout<<ans;
	return 0;
}
