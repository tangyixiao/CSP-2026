#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool tong[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			tong[j]=0;
		}for(int j=i;j<=n;j++){
			tong[a[j]]=1;
		}for(int j=1;j<=m;j++){
			ans[j]+=tong[j];
		}
	}for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}

