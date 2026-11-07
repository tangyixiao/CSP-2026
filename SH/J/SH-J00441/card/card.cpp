#include<bits/stdc++.h>
using namespace std;
int a[500010],n,m;
int last[300010];
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=x;
		last[x]=i;
	}
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n){
			ans[a[now]]++;
			now=last[a[now]]+1;
		}
	}
	for(int i=1;i<m;i++) cout<<ans[i]<<" ";
	cout<<ans[m]<<endl;
	return 0;
}
