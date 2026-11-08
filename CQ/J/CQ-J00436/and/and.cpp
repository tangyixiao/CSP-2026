#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=200005;
int n,m,a[N],vis[40],vis2[N],vis3[N],maxn,ans;
vector<int>t[40];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t2=a[i],cnt=0;
		while(t2){
			vis[++cnt]+=t2%2;
			if(t2%2)t[cnt].push_back(i);
			t2/=2;
		}
		maxn=max(maxn,cnt);
	}
	int t2=1,ttt=1;
	for(int i=1;i<maxn;i++)t2*=2;
	for(int i=maxn;i>=1;i--){
		if(vis[i]>=m){
			int l=vis[i],flag=0,cnt=0;
			for(int j=0;j<l;j++){
				int x=t[i][j];
				if(vis2[x])cnt++;
			}
			if(cnt>=m)flag=1;
			if(ttt){
				ans+=t2;
				for(int j=0;j<l;j++){
					int x=t[i][j];
					vis2[x]=1;
				}
				ttt=0;
				t2/=2;
				continue;
			}
			if(flag){
				ans+=t2;
				memset(vis3,0,sizeof(vis3));
				for(int j=0;j<l;j++){
					int x=t[i][j];
					vis3[x]=1;
				}
				for(int i=1;i<=n;i++){
					if(vis2[i]&&vis3[i])vis2[i]=1;
					else vis2[i]=0;
				}
			}
		}
		t2/=2;
	}
	cout<<ans;
	return 0;
}
