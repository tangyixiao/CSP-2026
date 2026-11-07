#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],p[N],s[N];
bool check(int x){
	if(x&1) return 0;
	for(int i=0;i<=17;i++) if(x==(1<<i)) return 1;
	return 0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1) return cout<<a[n],0;
	if(m==n){
		int x=0;
		for(int i=1;i<=n;i++) x=max(x,a[i]);
		for(int i=1;i<=n;i++) x&=a[i];
		return cout<<x,0;
	}
	if(m==2){
		int mx=0;
		for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++) mx=max(mx,a[i]&a[j]);
		return cout<<mx,0;
	}
	if(m==n-1){
		int mx=0;
		p[0]=a[1],s[n+1]=a[n];
		for(int i=1;i<=n;i++) p[i]=p[i-1]&a[i];
		for(int i=n;i;i--) s[i]=s[i+1]&a[i];
		for(int i=1;i<=n;i++){
			if(i==1) mx=max(mx,s[2]);
			else if(i==n) mx=max(mx,p[n-1]);
			else mx=max(mx,p[i-1]&s[i+1]);
		}
		return cout<<mx,0;
	}
	int mx=-1;
	for(int i=1;i<=n;i++) mx=max(mx,a[i]);
	if(mx==4){
		int c0=0,c1=0,c2=0,c3=0,c4=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0) c0++;
			else if(a[i]==1) c1++;
			else if(a[i]==2) c2++;
			else if(a[i]==3) c3++;
			else c4++;
		}
		if(c4>=m) cout<<4;
		else if(c3>=m) cout<<3;
		else if(c2+c3>=m) cout<<2;
		else if(c1+c3>=m) cout<<1;
		else cout<<0;
	}
	else if(check(n)) cout<<n-m;
	else cout<<a[n-m+1];
	return 0;
}