#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[500005],t[300005],q[500005],l;
ll ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		l=0;
		for(int j=1;j<=m;j++) t[j]=0;
		for(int j=i;j<=n;j++){
			l++;
			if(t[a[j]]==0){
				t[a[j]]++;
				q[l]=a[j];
				continue;
			}
			for(int k=l;k>=1;k--){
				if(q[k]==a[j]){
					l=k;
					break;
				}
			}
		}
		for(int j=1;j<=l;j++) ans[q[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}