#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,m,a[500005],b[500005],f[500005],x[500005];
int find(int p,int l){
	for(int i=1;i<=l;i++){
		if(x[i]==p) return i;
	}
	return 0;
}
signed main(){
	freopen("card.in","r",stdio); 
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		int l=0;
		for(int j=i;j<=n;j++){
			int t=find(a[j],l);
			if(t==0){
				l++;
				x[l]=a[j];
			}else{
				for(int k=t;k<=l;k++) x[k]=0;
				l=t;
				x[t]=a[j];
			}	
		}
		for(int j=1;j<=l;j++) {
			b[x[j]]++;
			x[j]=0;
		}
	}
	for(int i=1;i<=50000;i++){
		if(f[i]!=0){
			cout<<b[i]<<" ";
		}
	}
	return 0;
}