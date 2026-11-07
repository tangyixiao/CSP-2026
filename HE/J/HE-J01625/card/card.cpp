#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int m,n,r,ans,a[300001],f[300001],nw[300001],cnt[300001];
bool b[300001]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&ans);
		a[i]=ans; 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			f[j]=0;
			nw[j]=0;
			b[j]=0;
		}
		r=0;
		for(int j=i;j<n;j++){
			int x=a[j];
			if(b[x]){
				int r1=r;
				r=f[x];
				for(int k=f[x]-1;k<=r1;k++){
					f[nw[k]]=0;
					nw[k]=0;
					b[k]=0;
				}
				
				nw[r]=a[j];
				b[x]=1;
				f[x]=r+1;
			}
			nw[r]=a[j];
			r++;
			b[x]=1;
			f[x]=r+1;
		}
		for(int j=0;j<r;j++){
			cnt[nw[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",cnt[i]);
	}
	return 0;
}
