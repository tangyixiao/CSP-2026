#include<bits/stdc++.h>
using namespace std;
long long a[200002],s[200002];
char c[200002];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
	long long r=n+1,cnt=0,ans=0,i=1;
	while(i<r){
		cnt+=a[i];
		while(cnt>0&&i<r){
			--r;
			ans+=(c[r]!=c[i])*min(cnt,a[r]);
			cnt-=a[r];
		}
		if(i>=r) break;
		++i;
		ans+=min(a[i],-cnt)*(c[i]!=c[r]);
	}
	cout<<ans;
	return 0;
}