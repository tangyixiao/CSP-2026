#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],p[31],ans,c[200005],k;
bool cmp(int t1,int t2){
	return t1>t2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	p[0]=1;
	for(int i=1;i<=30;i++){
		p[i]=p[i-1]*2;
	}
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=29;i>=0;i--){
		k=0;
		for(int j=1;j<=n;j++){
			if(!((a[j]/p[i])&1)){
				break;
			}
			k++;
			b[k]=a[j];
			b[k]-=p[i];
		}
		for(int j=k+1;j<=n;j++){
			c[j-k]=a[j];
		}
		if(k>=m){
			n=k;
			for(int j=1;j<=k;j++){
				a[j]=b[j];
			}
			ans+=p[i];
		}
		else{
			int l=1,r=1;
			for(int j=1;j<=n;j++){
				if(l>k){
					a[j]=c[r];
					r++;
				}
				else if(r>n-k){
					a[j]=b[l];
					l++;
				}
				else{
					if(b[l]>c[r]){
						a[j]=b[l];
						l++;
					}
					else{
						a[j]=c[r];
						r++;
					}
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
}
