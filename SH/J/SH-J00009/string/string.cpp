#include<bits/stdc++.h>
using namespace std;
struct man{
	long long dat;
	bool zf;
	bool operator < (const man &x) const {
		return dat<x.dat;
	}
};
man mman(long long a,bool b){
	man x;
	x.dat=a;
	x.zf=b;
	return x;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n+1][2];
	char c[n+1][2];
	c[0][0]=c[0][1]='\0';
	for(long long i=1;i<=n;i++){
		cin>>a[i][0]>>c[i][0];//0+1-
		a[n+1-i][1]=a[i][0];
		c[n+1-i][1]=c[i][0];
	}
	man pos[2*n+2];
	pos[0].dat=pos[n+1].dat=0;
	pos[n+1].zf=true;
	for(long long i=1;i<=n;i++){
		pos[i]=mman(pos[i-1].dat+a[i][0],0);
		pos[i+n+1]=mman(pos[i+n].dat+a[i][1],1);
	}
	sort(pos,pos+n+n+3);
	long long ans=0,yps=0,dps=0;
	for(long long i=0;i<=n+n;i++){
		if(pos[i].zf)dps++;
		else yps++;
		if(c[dps][1]!=c[yps][0])ans+=(pos[i+1].dat-pos[i].dat);
	}
	ans/=2;
	cout<<ans<<'\n';
	return 0;
}
