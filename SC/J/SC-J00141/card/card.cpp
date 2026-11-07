#include"bits/stdc++.h"
using namespace std;
//csp_j is so hard! 
#define N int(2e5+5)
int n,m,a[N],cnt[N],
mxps[N],been[N];
bool Appr[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		mxps[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		if(Appr[a[i]]) been[i]=mxps[a[i]];
		else Appr[a[i]]=true,been[i]=i;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(mxps[i]>=been[j]) cnt[i]++;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	return 0;
} 