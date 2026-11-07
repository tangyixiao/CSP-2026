#include<bits/stdc++.h>
using namespace std;
struct gay{
	bool l[200005];
};
int a[200005];
gay t[31];
int ctt[200005];
bool vis[200005];
int main(){
	freopen("and.in","i",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			int x=pow(2,j),y=a[i];
			if((x&y)==x){
				t[j].l[i]=1;
				maxn=max(maxn,j);
			}
		}
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			int x=pow(2,j),y=a[i];
			if((x&y)==1){
				t[j].l[i]=1;
				maxn=max(maxn,j);
			}
		}
	}
	int ans=pow(2,30)-1;
	for(int i=maxn;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[j]==1) continue;
			if(t[i].l[j]==1){
				cnt++;
			}
		}
		if(cnt>m){
			for(int j=1;j<=n;j++){
				if(vis[j]==1) continue;
				if(t[i].l[j]==1){
					ctt[j]++;
				}
			}
			for(int j=1;j<=n;j++){
				if(vis[j]==1) continue;
				if(t[i].l[j]==0){
					vis[j]==1;
				}
			}
		}
		else if(cnt==m){
			for(int k=1;k<=n;k++){
				if(vis[k]==1) continue;
				if(t[i].l[k]==1){
					ans&=a[k];
				}
			}
			cout<<ans;
			return 0;
		}
	}
	int s=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==1) continue;
		if(s>m) break;
		s++;
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}// 