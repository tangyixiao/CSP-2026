#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],L[300005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int w=0;w<n;w++){
		for(int i=w+1;i<=n;i++){
			if(L[a[i]]==0)L[a[i]]=i;
			else{
				for(int j=i-1;j>L[a[i]];j--){
					L[a[j]]=0;
				}
				L[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(L[i]!=0){
				ans[i]++;
			}
//			cout<<L[i]<<' '<<i<<endl;
			L[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
