#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N],b[N],c[M],d[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,sum=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		sum=1;
		for(int j=1;j<=n;j++)
			b[i]=0;
		for(int j=1;j<=m;j++)
			c[i]=0;
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0){
				b[sum]=a[j];
				c[a[j]]++,sum++;
			}
			else{
				int x=0;
				for(int l=1;l<=sum-1;l++){
					if(b[l]==a[j]||x==1){
						x=1;
						for(int y=l;y<=sum;y++)
							c[b[y]]--,b[y]=0,sum--;
					}
				}
			}
		}
		for(int i=1;i<=sum;i++)
			d[b[i]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<d[i]<<" ";
	return 0;
}