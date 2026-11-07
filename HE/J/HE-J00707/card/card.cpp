#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],p[300005],z[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=i;j<=n;j++){
			k++;
			if(p[a[j]]==1){
				while(1){
					k--;
					if(b[k]==a[j])break;
					else p[b[k]]=0;
				}
			}
			else{
				b[k]=a[j];
				p[a[j]]=1;
			}
		}
		for(int j=1;j<=k;j++){
			z[b[j]]+=1;
		}
		for(int j=1;j<=m;j++){
			p[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<z[i]<<" ";
	}
	return 0;
}
