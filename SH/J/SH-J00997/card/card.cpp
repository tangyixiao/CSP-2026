#include<bits/stdc++.h>
using namespace std;
long long n,m,k,a[514114],cnt,q[514114],t[514114],f[514114];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		k=0;
		memset(f,0,sizeof(f));
		memset(q,0,sizeof(q));
		for(int j=i;j<=n;j++){
			if(f[a[j]]==0){
				q[++k]=a[j],f[a[j]]=k;
			}
			else{
				for(int l=f[a[j]];q[l]!=0;l++){
					k--,f[q[l]]=0,q[l]=0;
				}
				q[++k]=a[j],f[a[j]]=k;
			}
//			for(int o=1;o<=k;o++)cout<<q[o]<<' ';
//			cout<<endl;
		}
		for(int j=1;j<=k;j++){
//			cout<<q[j]<<' ';
			t[q[j]]++;
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<' ';
	return 0;
}
