#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
pair<int,int>a[200010];
signed main(){
//	freopen("string6.in","r",stdin);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		char x[10];
		scanf("%lld%s",&a[i].first,x+1);
		a[i].second=x[1]-'a';
	}
	int l=1,r=n;
	for(;l<r;){
		int x=min(a[l].first,a[r].first);
		ans+=x*(a[l].second!=a[r].second);
		a[l].first-=x,a[r].first-=x;
		if(a[l].first==0)l++;
		if(a[r].first==0)r--;
	}
	printf("%lld",ans);
}
