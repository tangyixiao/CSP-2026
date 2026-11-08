#include<bits/stdc++.h>
using namespace std;

long long sze(long long x){
	vector<long long> y;
	while(x!=0){
		y.push_back(x%2);
		x/=2;
	}
	long long z=0;
	for(long long i=y.size();i>=0;i--){
		z+=y[i];
		z*=10;
	}
	return z/10;
}
long long ezs(long long x){
	int cnt=1;
	long long y=0;
	while(x!=0){
		y+=(x%10)*cnt;
		cnt*=2;
		x/=10;
	}
	return y;
}

long long add(long long x,long long y){
	vector<long long> z;
	while(max(x,y)!=0){
		z.push_back((x%10)&&(y%10));
		x/=10;
		y/=10;
	}
	long long a=0;
	for(long long i=z.size();i>=0;i--){
		a+=z[i];
		a*=10;
	}
	return a/10;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m;
	cin>>n>>m;
	vector <long long> a;
	long long ans=0;
	for(long long i=0;i<n;i++){
		long long x;
		cin>>x;
		a.push_back(sze(x));
		if(m==1){
			ans=max(ans,x);
		}else if(m==n){
			if(i==0){
				ans=a[i];
			}else{
				ans=add(ans,sze(x));
			}
		}
	}
	if(m==1){
		cout<<ans;
		return 0;
	}else if(m==n){
		cout<<ezs(ans);
		return 0;
	}
	long long sum[m][n]={0};
	for(long long i=1;i<=m;i++){
		for(long long j=i-1;j<n;j++){
			sum[i][j]=max(sum[i-1][j],sum[i][j-1]+a[j]);
		}
	}
	cout<<sum[m][n];
	return 0;
} 
