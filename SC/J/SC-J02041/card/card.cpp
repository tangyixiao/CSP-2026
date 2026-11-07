#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+9;
int a[N],vis[N],c[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int d=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]>=a[i-1])d++;
	}
	if(d==n){
		int cnt=0;
		for(int i=n;i>=1;--i){
			if(!vis[a[i]])vis[a[i]]=n-cnt;
			else{
				for(int i=1;i<=m;++i)cout<<vis[i]<<" ";
				return 0;
			}
			cnt++;
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;++i){
			if(!vis[a[i]]){
				c[a[i]]=i;
				vis[a[i]]=1;
			}else{
				for(int j=1;j<=m;++j){
					c[j]=0;
					vis[j]=0;
				}
				c[a[i]]=i;
				vis[a[i]]=1;
			}
		}
		for(int i=1;i<=m;++i){
			ans[i]+=vis[i];
			vis[i]=0;
			c[i]=0;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;++i)cout<<ans[i]<<" ";
	return 0;
}
