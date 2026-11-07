#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005];
bool c[5008][5005];
queue<int> q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				q.empty();
				q.push(a[j]);
				for(int k=1;k<=m;k++){
					b[k]=0;
				}
				for(int k=1;k<=m;k++){
					c[k][k]=true;
				}
			}
			else{
				q.push(a[j]);
				b[a[j]]++;
				c[i][a[j]]=false;
			}
		}
	}
	for(int i=1;i<=m;i++){
		int ans=0;
		for(int j=1;j<=n;j++){
			if(!c[j][i]){
				ans++;
			}
		}
		cout<<ans<<" ";
	}
	return 0;
} 
