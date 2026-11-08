#include<bits/stdc++.h>
using namespace std;
int n,m,b[200005];
int f(int a){
	int maxx=-1e9;
	if(a==1){
		for(int i=1;i<=n;i++)
			maxx=max(maxx,b[n]);
	}
	else{
		for(int i=1;i<=n;i++)
			maxx=max(maxx,b[n]&f(a-1));
	}
	return maxx;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>b[i];
	cout<<f(m);
	return 0;
} 
