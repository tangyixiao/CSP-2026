#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+105;
int n,m;
int a[MAXN];
int s[MAXN][40];
int ans=0;
bool vis[MAXN]{0};
signed  main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],s[i][1]=a[i];
	for(int i=2;i<=35;i++){
		for(int j=1;j<=n;j++)s[j][i]=(s[j][i-1]>>1);
	}
	for(int i=35;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!vis[j]&&s[j][i]&1==1)cnt++;
		}
		if(cnt<m)continue;
		if(cnt==m){
			 ans=-1;
			for(int j=1;j<=n;j++){
				if(!vis[j]&&s[j][i]&1==1){
					if(ans==-1)ans=a[j];
					else ans&=a[j];
					
				}
				
			}
		cout<<ans<<endl;
		return 0;	
		}
		if(cnt>m){
			ans+=(1<<(i-1));
			for(int j=1;j<=n;j++){
				if((s[j][i]&1)==0)vis[j]=1;
			}
		}
	
	}
	cout<<ans<<endl;
	return 0;
}
