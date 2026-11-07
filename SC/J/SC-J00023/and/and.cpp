#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[90000005],c[90000005];
long long er(long long d){
	long long a=1,sum=0;
	while(d){
		b[a++]=d%2;
		d/=2;
	}
	for(long long i=a-1;i>0;i--){
		sum+=sum*10+b[i]; 
	}
	return sum;
}
long long ce(long long x1,long long x2){
	long long t=1,sum=0;
	while(x1&&x2){
		int x=x1%10,y=x2%10;
		x1/=10;
		x2/=10;
		if(x==1&&y==1){
			c[t]=1;
		}else{
			c[t]=0;
		}t++;
	}
	for(long long i=t-1;i>0;i--){
		long long f=1;
		sum+=c[i]*f;
		f*=2;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}else if(m==2){
		long long maxn=-1;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				long long x1=er(a[i]);
				long long x2=er(a[j]);
				long long sum=ce(x1,x2);
				maxn=max(maxn,sum);
			}
		}cout<<maxn;
		return 0;
	}
	return 0;
} 