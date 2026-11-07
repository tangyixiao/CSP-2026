#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
long long ans[N],n,m,a[N],b[N],vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	long long q=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[i]=i;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				vis[i]=j;
			}
		}
	}
	for(int g=1;g<=q;g++){
		for(int i=vis[g];i<=n;i++){
			ans[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}