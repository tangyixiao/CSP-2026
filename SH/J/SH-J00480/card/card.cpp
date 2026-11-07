#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	deque<int> ve(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(cnt,-1,sizeof cnt);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(cnt[a[j]]!=-1){
				for(int k=ve.size()-1;k>=j-1;k--){
					cnt[ve[k]]=-1;
					ve.pop_back();
				}
			}
			ve.push_back(a[j]);
			cnt[a[j]]=j;
		}
		for(int i=0;i<ve.size();i++){
			ans[ve[i]]++;
		}
		while(ve.size()) ve.pop_back();
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
}
