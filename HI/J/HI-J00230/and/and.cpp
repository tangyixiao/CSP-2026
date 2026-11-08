#include<bits/stdc++.h>
using namespace std;
long long a[200010],b[200010][40],c[200010];
bool cut(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cut);
	long long mx=0;
	for(long long i=1;i<=n;i++){
		long long j=1;
		while(a[i]>0){
			b[i][j]=a[i]%2;
			a[i]/=2;
			j++;
			mx=max(j,mx);
		}
	}
	mx--;
	long long maxx=0;
	for(long long i=mx;i>=1;i--){
		for(long long j=1;j<=n;j++){
			c[i]+=b[j][i];
		}
		if(c[i]>=m){
			maxx=i;
			break;
		}
	}
	long long sum=1,num=0;
	for(long long i=1;i<=maxx;i++){
		bool f=0;
		for(long long j=1;j<=m;j++){
			if(b[j][i]==0){
				f=1;
			}
		}
		if(f==0){
			num+=sum;
		}
		sum*=2;
	}
	cout<<num;
	return 0;
}
