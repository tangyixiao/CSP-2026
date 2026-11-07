#include<bits/stdc++.h>
using namespace std;
const int inf=5e5+5,inff=3e5+5;
int n,m,a[inf],p[inff],f[inf];
int ans[inff];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(p[a[i]]==0) p[a[i]]=i;
		else{
			f[p[a[i]]]=i;
			p[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n){
			ans[a[now]]++;
			while(f[now]!=0){
				now=f[now];
			}
			now++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

