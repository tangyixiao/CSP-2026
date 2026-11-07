#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int ans[300005]={0},a[500005],fri[500005]={0};
    bool k[500005];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(ans[a[i]]!=0) fri[i]=ans[a[i]];
    	ans[a[i]]=i;
	}
	if(m==1) cout<<n;
	else{
		memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++){
		memset(k,0,sizeof(k));
		for(int j=i;j<=n;j++){
			if(fri[j]!=0&&!k[fri[j]]&&fri[j]>=i) for(int z=fri[j];z<j;z++) k[z]=1;
		}
		for(int j=i;j<=n;j++) if(!k[j]) ans[a[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	}
	return 0;
}