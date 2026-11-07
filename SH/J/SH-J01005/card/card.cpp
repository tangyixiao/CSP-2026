#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],ans[100005],b[100005],flag2=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>a[i-1])flag2=0;
	}if(flag2){
		int ggs[100005],cnt=2;
		for(int i=1;i<=n;i++){
			if(a[i]==cnt)ggs[cnt-1]=i-1;
		}ggs[m]=n;
		for(int i=1;i<=m;i++){
			cout<<ggs[i]<<' ';
		}return 0;
	}if(m<=2){
		ans[a[1]]=n;
		ans[a[n]]=n;
		cout<<ans[1];
		if(m==2)cout<<' '<<ans[2];
		return 0;
	}
	for(int i=1;i<=n;i++){
		int cnt=0,vis[100005]={0};
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=0){
				for(int k=vis[a[j]]+1;k<=cnt;k++){
					vis[b[k]]=0;
				}
				cnt=vis[a[j]]-1;
			}
			b[++cnt]=a[j];
			vis[a[j]]=cnt;
		}for(int i=1;i<=cnt;i++){
			ans[b[i]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
