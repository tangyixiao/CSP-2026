#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],cnt[M],ans[M],cnt1[M];
bool f;
int cz[N],ip[M],vis[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			f=1;
		}
		cnt[a[i]]++;
	}
	if(!f){
		int sum=0;
		for(int i=1;i<=m;i++){
			sum+=cnt[i];
			ans[i]+=sum;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			cnt1[k]=cnt[k];
		}
		for(int j=i;j<=n;j++){
			cnt1[a[j]]--;
			ans[a[j]]++;
			int js=j;
			while(cnt1[a[j]]){
				js++;
				cnt1[a[js]]--;
				while(a[js]!=a[j]){
					js++;
					cnt1[a[js]]--;
				}
				j=js;
			}
		}
		cnt[a[i]]--;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
