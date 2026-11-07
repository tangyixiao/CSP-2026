#include<bits/stdc++.h>
using namespace std;
int vis[300005];
int n,m,a[500005],ans[300005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	//b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//b[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int i=1;i<=m;i++)vis[i]=0;
		for(int j=n;j>=i;j--){
			ans[a[j]]++;
			if(vis[a[j]]>0){
				//b[vis[a[j]]]++;
				//b[a[j]]--;
				for(int k=a[j];k<vis[a[j]];k++){
					ans[k]--;
				}
				continue;
			}
			vis[a[j]]=j;	
		}
	}
	for(int i=1;i<=m;i++){
		//b[i]=b[i]+b[i-1];
		cout<<(ans[i])<<' ';
	}
	return 0;
}
