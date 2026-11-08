#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M],jl[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if (jl[a[j]]){
				for (int k=jl[a[j]];k<=j-1;k++){
					jl[a[k]]=0;
				}	
			}
			jl[a[j]]=j;
		}
		for (int j=1;j<=m;j++){
			if (jl[j]) ans[j]++;
		}
		memset(jl,0,sizeof(jl));
	} 
	for (int i=1;i<=m;i++) cout<<ans[i]<<" "; 
	return 0;
}
