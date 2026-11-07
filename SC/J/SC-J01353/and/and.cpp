#include<bits/stdc++.h>
#define int long long
using namespace std;
int mx=-1e9,ans=0,n,m,c[100001];
void f(int x){
	int cnt=0,s[100001];
	while(1){
		if(x==0)break;
		s[++cnt]=x%2;
		x/=2;
	}
	for(int i=1;i<=cnt;i++){
		if(s[i]==1){
			c[i]++;
		}
	}
	mx=max(mx,cnt);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int mxx=-1e9,an;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(i==1)an=a;
		else an&=a;
		f(a);
		mxx=max(mxx,a);
	}
	if(m==1){
		cout<<mxx;
		return 0;
	}
	if(m==n){
		cout<<an;
		return 0;
	}
	int p=1,x=0;
	p=p<<(mx-1);
	for(int i=mx;i>=1;i--){
		if(x==m)break;
		if(c[i]>=m){
			x++;
			ans+=p;
		}
		p>>=1;
	}
	cout<<ans;
	return 0;
}