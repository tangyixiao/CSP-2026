#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],s[N],vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int mx=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	int ans=a[1];
	for(int i=1;i<=n;i++){
		ans=ans&a[i];
	}
	if(m==1) cout<<mx;
	if(m==n) cout<<ans;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}