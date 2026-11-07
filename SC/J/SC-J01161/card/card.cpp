#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2*1e5+10;
int a[N];
bool b[N];
int d[N];
int ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=500){
		for(int t=1;t<=n;t++){
			int id=0;
			for(int i=1;i<=N;i++) b[i]=false,d[i]=0;
			for(int i=t;i<=n;i++){
				if(b[a[i]]==false) d[++id]=a[i],b[a[i]]=true;
				else{
					int poiu=id;
					for(int j=poiu;j>=1;j--){
						if(d[j]==a[i]) break;
					    id--,b[d[j]]=false,d[j]=0;	
					}
				}
			}
			for(int i=1;i<=m;i++) ans[i]+=(b[i]==true);
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++)
	    if(a[i]!=a[i-1]) cout<<i-1<<" ";
	return 0;
}