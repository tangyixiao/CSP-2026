#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t,cnt[300005],l[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();cout.tie();
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		memset(l,0,sizeof l);
		t=0;
		for(int j=i+1;j<=n;j++){
			l[++t]=a[j];
			for(int k=i;k<j;k++){
				if(l[k]==l[j]){
					for(int p=k+1;p<=t;p++) l[p]=0;
					t=k;
					break;
				}
			}
		}
		for(int i=1;i<=t;i++) cnt[l[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}