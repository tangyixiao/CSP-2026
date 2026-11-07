#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int cnt[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==0){
				cnt[a[j]]=1;
			}
			else{
				memset(cnt,0,sizeof(cnt));
				cnt[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++){
			ans[j]+=cnt[j];
		}
		memset(cnt,0,sizeof(cnt));
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
