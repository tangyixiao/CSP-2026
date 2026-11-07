#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],c[500010],d[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int b[300010]={0},ans=1;
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0){
				for(int p=b[a[j]]+1;p<=ans;p++) b[p]=0; 
				ans=b[a[j]];
			}
			b[a[j]]=ans;
			c[ans]=a[j];
			ans++;
		}
		for(int j=1;j<ans;j++) d[c[j]]++;
	} 
	for(int i=1;i<=m;i++) cout<<d[i]<<" ";
	return 0;
 } 


