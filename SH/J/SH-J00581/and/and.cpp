#include <bits/stdc++.h>
using namespace std;
int s[200010],r[2][40],n,m,ans=0;
int def(int x,int y){
	memset(r,0,sizeof(r));
	int a=x,b=y,aa=0,bb=0,ans=0;
	while(a>=2){
		r[0][aa]=a%2;
		a/=2;
		aa++;
	}
	r[0][aa]=a;
	while(b>=2){
		r[1][bb]=b%2;
		b/=2;
		bb++;
	}
	r[1][bb]=b;
	for(int i=0;i<=max(aa,bb);++i){
		if(r[0][i]+r[1][i]==2){
			int cnt=1;
			for(int j=1;j<=i;++j){
				cnt*=2;
			}
			ans+=cnt;
		}
	}
	return ans;
}
int abc(int x,int y,int z){
	if(y==0){
		return z;
	}
	int ans=0;
	for(int i=x+1;i<=(n-y+1);++i){
		int cnt=def(z,s[i]);
		ans=max(ans,abc(i,y-1,cnt));
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>s[i];

	}
	for(int i=1;i<=(n-m+1);++i){
		ans=max(ans,abc(i,m-1,s[i]));
	}
	cout<<ans<<endl;
	return 0;
}
