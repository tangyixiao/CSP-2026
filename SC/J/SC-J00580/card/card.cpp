#include<bits/stdc++.h>
using namespace std;
long long n,m,v[500005],b[500005],ans[500005],a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		for(int j=i;j<=n;j++){
			if(v[b[j]]==0){
				v[b[j]]=j;
			}
			else if(v[b[j]]!=0){
				for(int y=v[b[j]];y<j;y++){
					a[y]=-1;
				}
				v[b[j]]=j;
			}
		}
		for(int j=i;j<=n;j++){
			if(a[j]!=-1){
				ans[b[j]]++;
			}
			a[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}