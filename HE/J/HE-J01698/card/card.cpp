#include<bits/stdc++.h>
using namespace std;
int n,m,num[500005],flag[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	for(int i=1;i<=n;i++){
		memset(flag,0,sizeof(flag));
		for(int j=i;j<=n;j++){
			flag[j]=1;
			for(int k=i;k<j;k++){
				if (flag[k]==1 && num[k]==num[j]){
					for(int l=k;l<j;l++){
						flag[l]=0;
					}
				}
			}
		}
		for(int j=i;j<=n;j++){
			if (flag[j]==1){
				ans[num[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
