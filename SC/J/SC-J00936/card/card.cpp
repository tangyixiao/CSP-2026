#include<bits/stdc++.h>
using namespace std;
int a[50005],ans[50005],k[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(k,0,sizeof(k));
		int len=0;
		for(int j=i;j<=n;j++){
			int p=lower_bound(k+i+1,k+j,a[j])-k;
			
			if(p!=j+1){
				len=p;
				for(int x=p+1;x<=n;x++)k[x]=0;cout<<p<<endl;
			}else{
				k[++len]=a[j];
			}
		}
		for(int j=1;j<=len;j++)ans[k[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}