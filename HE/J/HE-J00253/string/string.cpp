#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans,a[200005],s[200005],l[200005],r[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],s[i]=s[i-1]+a[i],l[i]=s[i-1]+1,r[i]=s[i];
	int p=1,q=n;
	while(p<q){
		int len=min(r[p]-l[p]+1,r[q]-l[q]+1);
		if(c[p]!=c[q]) ans+=len;
		l[p]+=len,r[q]-=len;
		if(l[p]>r[p]) p++;
		if(l[q]>r[q]) q--;
	}
	cout<<ans;
	return 0;
}//O(n)
