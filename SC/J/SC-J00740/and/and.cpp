#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
long long a[N];
long long n,m;
long long sum=-1e9-10;
long long js(long long x,long long y){
	string s1="";
	while(x){
		s1+=((x%2)+'0');
		x/=2;
	}
	string s2="";
	while(y){
		s2+=((y%2)+'0');
		y/=2;
	}
	string sz="";
	for(long long i=0;i<s1.size();i++){
		if(s1[i]=='1' && s2[i]=='1'){
			sz+='1';
		}else{
			sz+='0';
		}
	}
	long long l=sz.size();
	long long ans=0;
	for(long long i=0;i<l;i++){
		long long er=1;
		for(long long j=1;j<=i;j++){
			er*=2;
		}
		ans+=(sz[i]-'0')*er;
	}
	return ans;
}
void d(long long x,long long t,long long zj){
	if(t>=m){
		sum=max(sum,zj);
		return;
	}
	if(t+1==m && x<=n){
		sum=max(sum,js(zj,a[x]));
		return;
	}
	if(x>=n){
		return;
	}
	d(x+1,t,zj);
	if(t==0){
		d(x+1,t+1,a[x]);
	}else if(t>=1){
		d(x+1,t+1,js(zj,a[x]));	
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n >>m;
	long long ma=-1e9-10;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	if(m==2){
		long long sum1=-1e9-10;
		for(long long i=1;i<n;i++){
			for(long long j=i+1;j<=n;j++){
				sum1=max(sum1,js(a[i],a[j]));
			}
		}
		cout<<sum1;
		return 0;
	}
	d(1,0,0);
	cout<<sum;
	return 0;
}