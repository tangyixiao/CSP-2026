#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[200005];
int s[200005][40];
bool f[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int cnt;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(cnt=0;cnt<=35;a[i]>>=1){
			s[i][++cnt]=a[i]&1;
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++) f[i]=1;
	for(int j=cnt;j>=1;j--){
		int sum=0;
		for(int i=1;i<=n;i++) if(s[i][j]==1&&(f[i]==1)) sum++;
		if(sum>=m){
			for(int i=1;i<=n;i++) if(s[i][j]==0) f[i]=0;
			ans+=1<<(j-1);
		}
	}
	cout<<ans;
}