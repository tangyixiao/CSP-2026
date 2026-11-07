#include<bits/stdc++.h>
#define int long long

using namespace std;
const int N=2e5+10;

int n;
int a[N];
char c[N];
int ans,pre[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];
	for(int l=1,r=pre[n];l<r;){
		int idl=lower_bound(pre+1,pre+n+1,l)-pre;
		int idr=lower_bound(pre+1,pre+n+1,r)-pre;
//		cout<<l<<' '<<r<<' '<<idl<<' '<<idr<<'\n';
		int p=min(r-pre[idr-1],pre[idl]-l+1);
		if(c[idl]!=c[idr]) ans+=p;
		l+=p;r-=p;
	}
	cout<<ans;
	return 0;
}
/*
fc string6.out string6.ans
*/
