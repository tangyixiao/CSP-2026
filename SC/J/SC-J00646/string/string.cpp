#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long si[100010];
char c[100010];
long long st[100010],en[100010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	s=" ";
	long long len=0;
	for(int i=1;i<=n;i++){
		cin>>si[i]>>c[i];
		st[i]=en[i-1]+1;
		en[i]=st[i]+si[i]-1;
		len+=si[i];
	}
	long long l,r;
	long long ans=0;
	if(len%2==0){
		l=len/2;
		r=len/2+1;
		char lc,rc;
		for(int i=1;i<=n;i++){
			if(l>=st[i]&&l<=en[i]){
				lc=c[i];
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(r>=st[i]&&r<=en[i]){
				rc=c[i];
				break;
			}
		}
		if(lc!=rc){
			ans++;
		}
	}else{
		l=len/2+1;
		r=l;
	}
	for(;l>=1,r<=len;){
		long long ml=0,mr=2e9,lw=1,rw=len;
		for(int i=1;i<=n;i++){
			if(st[i]>=l){
				break;
			}else if(st[i]<l){
				ml=st[i];
				lw=i;
			}
		}
		for(int i=n;i>=1;i--){
			if(en[i]<=r){
				break;
			}else if(en[i]>r){
				mr=en[i];
				rw=i;
			}
		}
		int minn=min(mr-r,l-ml);
		if(c[rw]!=c[lw]){
			ans+=minn;
		}
		l-=minn;
		r+=minn;
		if(l==1&&r==len){
			break;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/