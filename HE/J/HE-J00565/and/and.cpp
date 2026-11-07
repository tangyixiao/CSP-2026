#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main(){
	freopen("and5.in","r",stdin);
	freopen("and5.ans","w",stdout);	
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		long long b=-100000000;
		for(long long i=1;i<=n;i++){
			b=max(b,a[i]);
		}
		cout<<b;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(m==n){
		long long b=a[1];
		for(int i=2;i<=n;i++){
			b=(b&a[i]);
		}
		cout<<b;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(m==n-1){	
		long long max1=-1000000000000;
		for(long long i=1;i<=n;i++){
			long long b;
			if(i==1) b=a[2];
			else b=a[1];
			for(long long j=1;j<=n;j++){
				if(j==i) continue;
				b=(b&a[j]);
			}
			max1=max(max1,b);
		}		
		cout<<max1;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(m==2){
		long long max1=-1000000000000;
		long long b;
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=n;j++){
				if(j==i) continue;
				b=(a[i]&a[j]);
				max1=max(max1,b);
			}
		}
		cout<<max1;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
