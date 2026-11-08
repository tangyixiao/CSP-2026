#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long a[201000];
bool vis[201000];
long long ans=-0x7fffffff;
long long pow(long long a,long long b){
	long long ans=1;
	for(long long i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int yu(int a,int b){
	long long l[20],p[20],gzw[20];
	memset(l,0,sizeof(l));
	memset(l,0,sizeof(p));
	memset(l,0,sizeof(gzw));
	long long cnt=1;
	while(a>=1){
		l[cnt]=a%2;
		a/=2;
		cnt++;
	}
	cnt=1;
	while(b>=1){
		p[cnt]=b%2;
		b/=2;
		cnt++;
	}
	int ans=0;
	for(int i=1;i<=20;i++){
		if(l[i]==p[i]&&l[i]==1){
			gzw[i]=1;
			ans+=pow(2,i-1);
		}
	}
	return ans;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long r=yu(a[i],a[j]);
				ans=max(ans,r);
			}
		}
		cout<<ans;
		return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=yu(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	cout<<"ich liebe liupeng";
	return 0;
}
