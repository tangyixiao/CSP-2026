#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ps[300005],ans[300005];
void read(int&a){
	int x=0,f=1;
	char c;
	c=getchar();
	while(c>'9' || c<'0'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c<='9' && c>='0'){
		x*=10;
		x+=c-'0';
		c=getchar();
	}
	a=x*f;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		read(a[i]);
		ps[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			ans[a[j]]++;
			j=ps[a[j]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
