#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],la[300005],ne[500005];
int id[500005],ans[300005],s[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(la[a[i]]==0) id[i]=a[i],ne[i]=i+1;
		else ne[i]=la[a[i]]; la[a[i]]=i,s[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(id[i]!=0) ans[id[i]]+=s[i]; 
		s[ne[i]]+=s[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
