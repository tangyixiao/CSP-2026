#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
char f[100000005];
long long c[200005];
long long d[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s+=a[i];
	}
	if(s<=100000000){
		int t=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++) f[++t]=b[i];
		}
		int ans=0;
		for(int i=1;i<=s/2;i++){
			if(f[i]!=f[s-i+1]) ans++;
		}
		cout<<ans;
	}
	else{
		for(int i=2;i<=n;i++){
			c[i]=c[i-1]+a[i];
		}
		for(int i=n-1;i>=1;i--){
			d[i]=d[i+1]+a[i];
		}
		long long l=0,r=s,e,ans=0;
		int lb=1,rb=n;
		while(l<=r && lb<rb){
			e=min(c[lb+1]-l,r-d[rb-1]);
			l+=e;
			r-=e;
			if(b[lb]!=b[rb]) ans+=e;
			if(s-r==d[rb-1]) rb--;
			if(l==c[lb+1]) lb++;
		}
		cout<<ans;
	}
	return 0;
}

