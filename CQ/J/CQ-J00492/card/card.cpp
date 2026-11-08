#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],cnt[N],d[N],tot[N],sum=0;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=2;i<=n;i++){
    	if(a[i-1]>a[i]){
    		sum=1;
    		break;
		}
	}
	if(sum==0){
		int ans=0;
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]){
				cnt[a[i-1]]=i-1;
			}
		}
		cnt[a[n]]=n;
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(d,0,sizeof(d));
		memset(tot,0,sizeof(tot));
		int r=0;
		for(int j=i;j<=n;j++){
			if(tot[a[j]]==0||tot[a[j]]>r){
				tot[a[j]]=++r;
				d[r]=a[j];
			}else{
				r=tot[a[j]];
			}
		}
		for(int i=1;i<=r;i++){
			cnt[d[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}

