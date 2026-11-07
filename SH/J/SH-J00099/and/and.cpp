#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
bool f[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)
			if(!f[j]&&((a[j]>>i)&1))cnt++;
		if(cnt>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++)
				if(!((a[j]>>i)&1))f[j]=1;
		}
	}
	cout<<ans;
	return 0;
}
