#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans,l,r,n,llen,rlen;
struct node{
	int s;
	char c;
}a[300001];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
	}
	l=1;r=n;
	while(1){
		if(a[r].s==0)r--;
		if(a[l].s==0)l++;
		if(l>=r)break;
		int k=min(a[l].s,a[r].s);
		if(a[l].c!=a[r].c)ans+=k;
        a[l].s-=k;
		a[r].s-=k;
	}
	cout<<ans;
	return 0;
}