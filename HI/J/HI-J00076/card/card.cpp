#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int st=i,ed=n;
		for(int j=i;j<=n;j++){
			c[j]=a[j];
			for(int k=j-1;k>=i;k--)
				if(c[j]==c[k]){
					st=j;
					break;
				}
		}
		for(int j=st;j<=ed;j++)b[c[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" "; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}

