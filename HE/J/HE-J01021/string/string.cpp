#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
ll n,ans,cnt,len,a[N],al[N];
char c[N],cl[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1])al[cnt]+=a[i];
		else al[++cnt]+=a[i];
		cl[cnt]=c[i];
		
	}
	ll l=1,r=cnt;
	while(l<r){
		while(l<r&&cl[l]!=cl[r]){
			ll y=min(al[l],al[r]);
			ans+=y;
			al[l]-=y;al[r]-=y;
//			cout<<al[l]<<' '<<al[r]<<'\n';
			if(al[l]==0)l++;
			if(al[r]==0)r--;
//			cout<<y<<' '<<l<<' '<<r<<'\n';
		}
		while(l<r&&cl[l]==cl[r]){
			ll y=min(al[l],al[r]);
			al[l]-=y,al[r]-=y;
			if(al[l]==0)l++;
			if(al[r]==0)r--;
//			cout<<y<<' '<<l<<' '<<r<<'\n';
		}
	}
	cout<<ans;
	return 0;
}
/*
2
2 a
3 a
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
7
1 a 
3 b
1 d
1 e
3 f
1 b
1 a
*/
