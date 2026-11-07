#include<bits/stdc++.h>
using namespace std;
int const maxn=5e5+10;
int n,m;
int a[maxn],ans[300005];
int main(){
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	cin>>n>>m;
	memset (ans,0,sizeof(ans));
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){//n¾ÖÓÎÏ· 
		int tong[300005];
		memset (tong,0,sizeof(tong));
		for (int j=i;j<=n;j++){
			tong[a[j]]++;
		}
		int p=0;
		for (int k=n;k>=i;k--){
			p++;
			int q=0;
			if (tong[a[k]]>1){
				q++;
				for (int x=k;x<=n;x++){
					ans[a[x]]++;
				}
				break;
			}
			if (q==0&&p==(n-i+1)){
				for (int x=k;x<=n;x++){
					ans[a[x]]++;
				}
			}
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	} 
	cout<<endl;
	return 0;
}
