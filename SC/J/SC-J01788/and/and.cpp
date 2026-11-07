#include <bits/stdc++.h>
using namespace std;
int n,m,s=0,k,l;
int a[200005][30];
int b[200005]={0};
int c[200005]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i][0];
		int u=a[i][0],v=1;
		while(u!=0){
			a[i][v]=u%2;
			u=u/2;
			v++;
			b[i]++;
		}
		s=max(s,b[i]);
	}
	int o;
	for(int i=s;i>=1;i--){
		o=0;
		for(int j=1;j<=n;j++){
			if(b[j]==i){
				o++;
				c[o]=j;
			}
		}
		if(o>=m){
			k=i;
			break;
		}
		else memset(c,0,sizeof(c));
	}
	long long ans=0;
	for(int i=k;i>=1;i--){
		l=0;
		for(int j=1;j<=o;i++){
			if(a[c[j]][i]==1)l++;
		}
		if(l>=m)ans=(ans*2)+1;
		else ans=(ans*2);
	}
	cout<<ans;
	return 0;
}
