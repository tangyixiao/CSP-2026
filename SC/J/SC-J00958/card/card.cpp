#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
int n,m;
int a[N],c[N],da[N],d[N],jc[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i;j++)	c[j]=a[j+i];
		for(int j=1;j<=m;j++)	jc[j]=0;
		int sum=1;
		d[1]=c[1];
		jc[c[1]]++;
		
		for(int j=2;j<=n-i;j++){
			d[++sum]=c[j];
			jc[c[j]]++;
			if(jc[c[j]]!=1){
				bool sf=true;
				for(int k=sum-1;k>=1&&sf;k--){
					if(jc[d[k]]==2){
						sum=k;
						sf=false;
						jc[d[k]]=1;
					}
					else	jc[d[k]]--;
				}
			}	
		}
		d[++sum]=c[n-i];
		for(int j=1;j<sum;j++)	if(d[j]==c[n-i])	sum=j;
		for(int j=1;j<=sum;j++)	da[d[j]]++;
	}
	for(int i=1;i<=m;i++)	cout<<da[i]<<" ";
	return 0;
}