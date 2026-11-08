#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],c[300005],t,q;
int main(){	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	t=n-1;
	q=n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	while(t--){
		int i=n-t,s=i;
		long long b[500005]={};
		for(int j=i;j<=q;j++){
			b[s]=a[j];
			for(int k=i;k<s;k++)
				if(b[k]==b[s]){
					for(int w=k+1;w<=s;w++)
						b[w]=0;
					q=q-(s-k);
					s=k;
				}
		}
		for(int j=i;j<=n;j++)
			c[b[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<c[i]<<" ";
	return 0;
}
