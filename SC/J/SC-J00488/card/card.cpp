#include <bits/stdc++.h>
using namespace std;
int m,n,sta[300064],ans[300064],tong[300064],a[500064],top=1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			sta[top]=a[i];
			for(int j=1;j<=top;j++){
				if(sta[j]==sta[top]){
					top=j;
					break;
				}
			}
			top++;
		}
		for(int i=1;i<top;i++){
			ans[sta[i]]++;
		}
		for(int i=1;i<=m;i++){
			if(tong[i]!=0){
				ans[i]++;
			}
		}
		for(int i=1;i<=m;i++){
			tong[i]=0;
			sta[i]=0;
		}
		top=1;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
