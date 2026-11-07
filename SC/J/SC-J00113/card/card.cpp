#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+7,N2=3e5+7;
int a[N],f[N];
int b[N2],ans[N2];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	memset(b,255,sizeof(b));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[n+1]=-1;
	for(int j=n;j>=1;j--){
		if(b[a[j]]>0){
			f[j]=b[a[j]];
		}else if(b[a[j]]==-1){
			f[j]=j+1;
			b[a[j]]=j;
		}
	}
	for(int i=1;i<=n;i++){
		int ne=i;
		while(ne!=n+1){
			if(a[ne]==a[f[ne]]){
				ne=f[ne];
			}else{
				ans[a[ne]]++;
				ne=f[ne];
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}