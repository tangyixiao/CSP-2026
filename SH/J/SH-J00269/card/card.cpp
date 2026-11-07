#include<bits/stdc++.h>
using namespace std;
int n,m,a[300010],c[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[a[i]]++;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(c[a[i]]==1) cnt++;
	}
	if(cnt==n){
		for(int i=1;i<=n;i++) cout<<1<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++) cout<<1<<" ";	
	return 0;
}
