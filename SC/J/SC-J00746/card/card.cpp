#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
void xs(int x){
	int sd[300005];string ss;int g=0;
	for(int i=1;i<=m;i++) sd[i]=0;
	for(int i=x;i<=n;i++){
		if(!sd[a[i]]){
			g++;
			ss[g]=a[i]+'0';
			sd[a[i]]=g;
		}
		else g=sd[a[i]];
//		for(int i=1;i<=g;i++)cout<<ss[i];
//		cout<<' ';
	}
	for(int i=1;i<=g;i++){
		ans[ss[i]-'0']++;
	}
//	for(int i=1;i<=m;i++){
//		cout<<ans[i]<<' ';
//	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		xs(i);
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}