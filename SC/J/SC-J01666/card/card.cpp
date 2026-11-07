#include <bits/stdc++.h>
using namespace std;
int a[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	int flag=0;
	for(int i=1;i<=n;i++){
		if(b[i]!=a[i]) flag=1;
	}
	if(flag==0){
		int c[300005];
		for(int i=1;i<=n;i++) c[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	}
	/*else {
		int num[300005];
		for(int i=1;i<=n;i++){
			int d[300005];
			int k=1;
			for(int j=i;j<=n;j++){
				d[k]=a[j];
				for(int r=1;r<k;r++){
					if(d[k]==d[r]) k=r;	
				}
				k++;
			}
			for(int j=1;j<=k;j++){
				num[d[j]]++;
			}
		}
		for(int i=1;i<=m;i++) cout<<num[i]<<" ";
	}*/
	return 0;
}