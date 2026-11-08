#include<bits/stdc++.h>
using namespace std;
long long a[600001],ans[400001],x[400001],m,n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			x[k]=0;
		}
		for(int j=i;j<=n;j++){			
			if(x[a[j]]>=1){
				for(int k=1;k<=m;k++){
					x[k]=0;
				}				
			}
			x[a[j]]++;
		}
		for(int j=1;j<=m;j++)ans[j]+=x[j];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
