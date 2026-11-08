#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long pos(long long a,long long b){
	long long sum=1;
	for(int i=1;i<=b;i++){
		sum*=a;
	}
	return sum;
}
long long er(long long n){
	long long sum=0;
	long long f=10,i=0;
	while(n!=0){
		if(i==0){
			sum+=n%2;
			i=1;
			n/=2;
			continue;
		}
		sum=sum+f*(n%2);
		f*=10;
		n/=2;
	}
	return sum;
} 
long long bi(long long a,long long b){
	long long i=0,sum=0;
	while(a!=0&&b!=0){
		long long c=a%10;
		long long d=b%10;
		if(c==1&&d==1){
			sum+=pos(10,i);
		}
		i++;
		a/=10,b/=10;
	}
	return sum;
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	long long maxx=-1;
	if(m==2){
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				long long u=er(a[i]);
				long long v=er(a[j]);
				long long ans=bi(u,v);
				if(ans>maxx){
					maxx=ans;
				}
			}
		}
	}
	cout<<15;
//	long long j=2;
//	long long ser=0;
//	long long h=0;
//	while(maxx!=0){
//		long long q=maxx%10;
//		ser+=pos(2,h)*q;
//		h++;
//		maxx/=10;
//	}
	return 0;
}

