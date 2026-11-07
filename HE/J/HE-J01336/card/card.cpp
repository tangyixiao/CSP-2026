#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[300005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[j]=a[j];
			if(b[c[j]]!=0){
				for(int x=b[c[j]];x<j;x++){
					c[x]=0;
				} 
				for(int x=1;x<=m;x++){
					if(b[c[j]]<=b[x]&&b[x]<j) b[x]=0;
				}
			} 
			b[c[j]]=j;
		}
		for(int j=1;j<=n;j++){
			ans[c[j]]++;
			c[j]=0;
			b[j]=0;
		} 
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
