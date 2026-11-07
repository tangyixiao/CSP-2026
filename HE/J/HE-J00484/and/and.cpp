 /*#include<bits/stdc++.h>
using namespace std;
const int N=2*1e2+3;
long long n,m,sum[N],z,b[N];
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		long long x=0,y[N]={};
		z=0;
		while(a[i]){
			sum[i]++;
			x=a[i]%2;
			a[i]/=2;
			y[sum[i]]=x;
			if(x==1) z++;
		}
		x=0;
		for(int j=sum[i];j>=1;j--){
			x=(x+y[j])*10;
		}
		a[i]=x/10;
		b[i]=z;
	}
	sort(b+1,b+1+n);
	for(int i=n;i<=n-m+2;i--){	
		long long c[N],sum2,x[N],y[N];
		sum2=max(sum[i],sum[i+1]);
		for(int j=1;j<=sum[i];j++){
			x[j]=a[i]%10;
			a[i]/=10;
		}
		for(int j=1;j<=sum[i-1];j++){
			y[j]=a[i-1]%10;
			a[i-1]/=10;
		}
		for(int j=sum2;j>=1;j--){
			if(x[j]==1&&y[j]==1) c[j]=1;
			else c[j]=0;
		}
		for(int j=1;j<=sum2;j++){
			swap(c[j],c[sum2-j]);
		}
		for(int j=1;j<=sum2;j++){
			a[i-1]+=c[j]%10;
			c[j]/=10;
		}
	}
	cout<<a[n-m+1];
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
const int N=2*1e2+3;
long long n,m;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n%2==0) cout<<a[n/2];
	else cout<<a[n/2+1];
	return 0;
}
