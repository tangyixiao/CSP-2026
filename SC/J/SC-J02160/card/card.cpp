#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e8+5;
int a[N],ans[N],cnt[N],s[N];
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans[j]=a[j];
			if(vis[a[j]]){
				for(int k=s[a[j]];k<j;k++){
					vis[ans[k]]=0;
					ans[k]=0;
				}
			}
			vis[ans[j]]=1;
			s[ans[j]]=j;
		}
		for(int j=i;j<=n;j++){
			cnt[ans[j]]++;
		}
		for(int j=1;j<=m;j++){
			vis[j]=0;
		}
		for(int j=i;j<=n;j++){
			ans[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
