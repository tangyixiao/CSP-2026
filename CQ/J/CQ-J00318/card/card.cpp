#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[500005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		vector<int>vis(m+1,0);
		for(int j=i;j<=n;j++){
			if (vis[a[j]]){
				for(int k=vis[a[j]];k<=j-1;k++){
					vis[a[k]]=0;
				}
			}
			vis[a[j]]=j;
//			for(int k=1;k<=m;k++)cout<<vis[k]<<" ";
//			cout<<endl;
		}
		for(int j=1;j<=m;j++){
			if (vis[j]){
				ans[j]++;
			}
//			cout<<ans[j]<<" ";
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} /*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
