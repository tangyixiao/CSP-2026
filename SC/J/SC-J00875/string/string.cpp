#include<iostream>
#include<cstdio>
using namespace std;
const int N=2e5+10;
int a[N],n;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int sp=0,ep=n+1,lc=0,rc=0;
	long long ans=0;
	while(sp+1<ep){
		if(lc==0) lc=a[++sp];
		if(rc==0) rc=a[--ep];
		int t=min(lc,rc);
		if(c[sp]!=c[ep]) ans+=t;
		lc-=t;rc-=t;
		
	}
//	if(lc!=rc) ans+=min(lc,rc);
	cout<<ans<<"\n";
	return 0;
}