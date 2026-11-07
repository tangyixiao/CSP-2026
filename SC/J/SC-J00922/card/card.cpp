#include<bits/stdc++.h>
using namespace std;
int a[200010],b[200010],c[100010],d[100010];
bool f[100010];
int n,m,k=1;
bool dy(){
	for(int i=1;i<=n;i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int l=1;l<=n;l++){
			bool ff[2];
			ff[1]=0;
			ff[2]=0;
			for(int i=l;i<=n;i++){
				if(a[i]==1){
					ff[1]=1;
				}else{
					ff[2]=1;
				}
			}
			if(ff[1]==1){
				d[1]+=1;
			}
			if(ff[2]==1){
				d[2]++;
			}
		}
		cout<<d[1]<<" "<<d[2];
		return 0;
	}else if(dy()==0){
		for(int l=1;l<=n;l++){
			for(int i=a[l];i<=n;i++){
				d[i]++;
			}
		}
		for(int ii=1;ii<=m;ii++){
			cout<<d[ii]<<" ";
		}
		return 0;
	}else{
		for(int l=1;l<=n;l++){
			k=1;
			for(int i=l;i<=n;i++){
				b[k]=a[i];
				k++;
				if(c[b[k]]!=0&&f[b[k]]==0){
					d[b[k]]++;
					k-=(b[k]-c[b[k]]+1);
					for(int j=c[b[k]];j<=i-1;j++){
						c[j]=0;
					}
					f[b[k]]=1;
				}
				c[b[k]]=i;
			}
			for(int j=1;j<=k;j++){
				if(f[j]==0){
					f[j]=1;
					d[j]++;
				}
				b[j]=0;
			}
			for(int i=1;i<=m;i++){
				f[i]=0;
				c[i]=0;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<d[i]<<" ";
			return 0;
		}
	}
}