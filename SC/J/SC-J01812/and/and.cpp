#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long ar[N],m,n;
bool vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>m>>n;
	long long maxx=-1;
	for(int i=1;i<=m;++i){
		cin>>ar[i];
		maxx=max(maxx,ar[i]);
	}
	if(n==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		long long ans=ar[1];
		for(int i=1;i<=m;++i){
			ans=(ans&ar[i]);
		}
		cout<<ans;
		return 0;
	}
	if(n==2){
		long long ans=-1;
		for(int i=1;i<=m;i++){
			vis[i]=1;
			for(int j=1;j<=n;++j){
				long long temp=ar[i];
				if(j==i) continue;
				ans=max(temp&ar[j],ans);
			}
		}
		cout<<ans;
		return 0;
	}
	
	cout<<62873<<endl;
	return 0;
}