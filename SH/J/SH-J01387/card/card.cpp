#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
long long cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int jl[300005]={};
		int jl2[500005]={};
		for(int j=i;j<=n;j++){
			cnt[a[j]]++;
			if(jl[a[j]]==0){
				jl[a[j]]=j;
			}else{
				for(int k=jl[a[j]];k<j;k++){
					if(jl2[k]==0){
						jl[k]=0;
						cnt[a[k]]--;
						jl2[k]=1;
					}
				}
				jl[a[j]]=j;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
