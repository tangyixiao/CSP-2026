#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int q[500005],f[300005],cnt;
bool flag=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	cin>>a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]) flag=0;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
		  ++ans[a[i]];
		ans[a[n]]=n;
		cout<<ans[1]<<' '<<ans[2];
		return 0;
	}
	if(flag==1){
		for(int i=1;i<n;i++) {
			if(a[i]<a[i+1]) ans[a[i]]=i;
		}
		ans[a[n]]=n;
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++){
		cnt=0;
		memset(q,0,sizeof(q));
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(f[k]>0 && f[k]<=cnt) cnt=f[k];
			else if(f[k]==0 || f[k]>cnt){
				q[++cnt]=k;
				f[k]=cnt;
			}
		}
		for(int j=1;j<=cnt;j++)
		  ++ans[q[j]];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
} 
