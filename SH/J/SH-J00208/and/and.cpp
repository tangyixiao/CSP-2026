#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],c[200005],overr=0,z[200005],zz=0;;
int ad(int x[200005],int len){
	string b[200005],d;
	unsigned int leng=0,leng2=1e9,flag=1;
	for(int i=0;i<len;i++){
		int o=x[i];
		while(o>0){
			b[i]+=char(o%2+'0');
			o/=2;
		}
		leng=max(leng,b[i].size());
		leng2=min(leng2,b[i].size());
	}
	for(int i=0;i<leng;i++){
		if(i>=leng2){
			d+='0';continue;
		}
		flag=1;
		for(int j=0;j<len;j++)
			if(b[j][i]!='1')flag=0;
		if(flag)d+='1';
		else d+='0';
	}
	int ans=0,tmp=1;
	for(int i=0;i<leng2;i++){
		ans+=(d[i]-'0')*tmp;
		tmp*=2;
	}
	return ans;
}
void dfs(int i,int cnt){
	c[cnt-1]=a[i];
	if(cnt==m){
		overr=max(overr,ad(c,m));
		return;
	}
	for(int j=i+1;j<n;j++)dfs(j,cnt+1);
}
bool check(int p){
	while(p>1){
		if(p%2==0)p/=2;
		else return 0;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int g=1,minn=2e9,maxx=0,gg=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		minn=min(minn,a[i]);
		maxx=max(maxx,a[i]);
		if(!check(a[i]+1)){
			g=0;
		}
		if(a[i]>=4)gg=0;
	}
	if(g||gg){
		sort(a,a+n);
		cout<<a[n-m];
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		cout<<ad(a,m);
		return 0;
	}
	if(m==n-1){
		for(int i=0;i<n;i++){
			if(a[i]==minn)continue;
			z[zz++]=a[i];
		}
		cout<<ad(z,m);
		return 0;
	}
	for(int i=0;i<=n-m;i++)dfs(i,1);
	cout<<overr;
	return 0;
}
