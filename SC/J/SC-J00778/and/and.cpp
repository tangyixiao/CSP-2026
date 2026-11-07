#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005][35],sm[35],pw[35],ans,f[200005],i,x;
void read(long long&a){
	long long x=0,f=1;
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
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	pw[1]=1;
	for(i=2;i<=31;i++){
		pw[i]=pw[i-1]*2;
	}
	cin>>n>>m;
	for(i=1;i<=n;i++){
		read(x);
		int c=0;
		while(x){
			a[i][30-c]=x%2;
			x/=2;
			c++;
		}
		for(int j=1;j<=30;j++){
			sm[j]+=a[i][j];
		}
	}
	for(x=1;x<=30;x++){
		if(sm[x]>=m){
			ans+=pw[30-x+1];
			for(i=1;i<=n;i++){
				if(a[i][x]!=1 && f[i]==0){
					f[i]=1;
					for(int j=1;j<=30;j++){
						sm[j]-=a[i][j];
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}