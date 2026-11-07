#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int a[500005];
bool check[500005];
int ans[500005];
bool chong[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		fill(check,check+500000,0);
		fill(chong,chong+300000,0);
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				if(a[k]==a[j]&&check[k]==0){
					for(int o=k;o<j;o++){
						check[o]=1;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(check[j]==0&&chong[a[j]]==0){
				chong[a[j]]=1;
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}