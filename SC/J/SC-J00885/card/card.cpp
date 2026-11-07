#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],l,b[1000005],sum[1000005];
int sreach(int x){
	for(int i=1;i<l;i++) if(b[i]==x) return i;
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		l=0;
		for(int j=i;j<=n;j++){
			b[++l]=a[j];
			if(!sreach(a[j])==0){
				for(int t=sreach(a[j]);t<=l;t++) b[t]=0;
				l=j-sreach(a[j]);
				b[l]=a[j];
			}
		}
		for(int j=1;j<=l;j++){
			sum[b[j]]++;
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		if(i!=m) cout<<sum[i]<<" ";
		else cout<<sum[i];
	}
	return 0;
}