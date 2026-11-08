#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace lp{
	int n,a[200005],l,r,x,y,tmp,lt[200005],rt[200005],ans;
	char c[200005];
	signed main(){
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0),cout.tie(0);
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i]>>c[i],lt[i]=rt[i-1]+1,rt[i]=lt[i]+a[i]-1,r+=a[i];
		l=x=1,y=n;
		while(x<y){
			tmp=min(rt[x]-l+1,r-lt[y]+1);
			if(c[x]!=c[y])ans+=tmp;
			l+=tmp,r-=tmp;
			if(l>rt[x])x++;
			if(r<lt[y])y--;
		}
		cout<<ans;
		return 0;
	}
}
signed main(){
	lp::main();
	return 0;
}

