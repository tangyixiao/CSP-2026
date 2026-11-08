#include<bits/stdc++.h>
using namespace std;
int n,m;
int c[500005],vis[300005],ans[300005];
int a[300005];
int cnt=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	int zd=1;
	for(int i=1;i<=n;i++){
		cnt=1;
		for(int j=zd;j<=n;j++){
			if(vis[c[j]]==1){
//				cout<<c[j]<<":";
				while(a[cnt]!=c[j]){
//					cout<<a[cnt]<<" ";
					vis[a[cnt]]=0;
					a[cnt]=0;
					cnt--;
				}
//				cout<<a[cnt]<<" ";
//				for(int k=1;k<=cnt;k++){
//					cout<<a[k]<<" ";
//				}
//				cout<<endl;
			}else{
				cnt++;
				a[cnt]=c[j];
				vis[c[j]]=1;
			}
		}
//		cout<<endl;
		memset(vis,0,sizeof(vis));
		zd++;
		for(int i=1;i<=cnt;i++){
			ans[a[i]]++;
			a[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3 

10 3
3 1 2 1 3 2 3 1 2 1
*/
