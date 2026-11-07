#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],b[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[a[j]]++;
			for(int k=j-1;k>=i;k--){
				if(a[k]==a[j]){
					for(int g=k;g<j;g++) b[a[g]]--;
				}
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<' ';
}