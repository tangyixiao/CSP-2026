#include<bits/stdc++.h>
using namespace std;
int n,m,num[300001],s[300001],h[500001],a[500001],f[300001],p[500001],ans[300001];
bool vis[500001],dizeng=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[i]=f[a[i]];
		f[a[i]]=i;
		num[a[i]]++;
		if(a[i]>a[i+1]){
			dizeng=0;
		}
	}
	if(dizeng){
		for(int i=1;i<=m;i++){
			s[i]=s[i-1]+num[i];
			cout<<s[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		vis[i-1]=1;
		for(int j=i;j<=n;j++){
			if(!vis[p[j]]){
				for(int k=p[j];k<j;k++){
					vis[k]=1;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(!vis[j]){
				ans[a[j]]++;
			}
			else{
				vis[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
