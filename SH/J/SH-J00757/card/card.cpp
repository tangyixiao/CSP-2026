#include<bits/stdc++.h>
using namespace std;
int kind[300010],a[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m,x,flag=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=x;
		if(x<a[i-1]) flag=0;
		kind[x]++;
	}
	if(m==2){
		ans[a[n]]=n;
		if(a[n]==2) ans[1]=kind[1];
		else ans[2]=kind[2];
	}
	if(m==1){
		cout<<n;
		return 0;
	} 
	if(flag==1){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(a[j]!=a[j+1]) ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
