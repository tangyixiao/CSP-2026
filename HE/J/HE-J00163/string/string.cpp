#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	int minn=0x3f3f3f3f;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		minn=min(minn,a[i]);
	}
	if(n==2){
		cout<<minn;
		return 0;
	}
	int ans=0;
	for(int i=1;i<=n/2;i++){
		if(c[i]!=c[n-i+1]){
			int maxn=max(a[i],a[n-i+1]);
			ans+=maxn;
		}
	}
	cout<<ans;
	return 0;
}
