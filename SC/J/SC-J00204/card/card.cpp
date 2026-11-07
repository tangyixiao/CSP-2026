#include<bits/stdc++.h>
using namespace std;
long long a[500005],ans[300005],w[300005];
bool v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=m;j++){
			v[j]=0;
		}
		for(long long j=i;j<=n;j++){
			if(v[a[j]]==0){
				v[a[j]]=1;
				w[a[j]]=j;
				continue;
			}
			for(long long k=w[a[j]]+1;k<=j-1;k++){
				v[a[k]]=0;
			}
			w[a[j]]=j;
		}
		for(long long j=1;j<=m;j++){
			if(v[j]==1)ans[j]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}