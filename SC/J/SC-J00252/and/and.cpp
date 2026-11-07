#include<bits/stdc++.h>
using namespace std;
int n,m;
long long p[200002],t[200002],ma=INT_MIN,dp[200002];
int work(int x){
	int p=1;
	int a=0;
	while(x!=0){
		a+=x%2*p;
		p*=10;
		x=x/2;
	}
	return a;
}
int a_d(int a,int b){
	int p=1;
	int c=0;
	while(a!=0 and b!=0){
		c+=((a%10) and (b%10))*p;
		p*=10;
		a=(a-a%10)/10;
		b=(b-b%10)/10;
	}
	return c;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		if(t[k]==0){
			p[i]=k;
		}
	}
	bool l=true;
	for(int i=1;i<=n;i++){
		if(p[i]!=pow(2,i)-1){
			l=false;
			break;
		}
	}
	if(m==1){
		sort(p+1,p+n+1);
		cout<<p[n];
		return 0;
	}
	else if(m==n){
		int sum;
		sum=p[1];
		for(int i=2;i<=n;i++){
			sum=a_d(work(sum),work(p[i]));
		}
		int ans=0;
		int i=0;
		while(sum!=0){
			ans+=sum%10*pow(2,i);
			sum=(sum-sum%10)/10;
			i++;
		}
		cout<<ans;
		return 0;
	}
	else if(l==true){
		sort(p+1,p+n+1);
		cout<<a_d(work(p[n-1]),work(p[n]));
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(a_d(work(p[i]),work(p[j])),ma);
			}
		}
		int ans=0;
		int i=0;
		while(ma!=0){
			ans+=ma%10*pow(2,i);
			ma=(ma-ma%10)/10;
			i++;
		}
		cout<<ans;
	}
	else{
		dp[1]=p[1];
		for(int i=2;i<=n;i++){
			dp[i]=max(a_d(work(dp[i-1]),work(p[i])),work(p[i]));
		}
		int ans=0;
		int i=0;
		while(dp[n]!=0){
			ans+=dp[n]%10*pow(2,i);
			dp[n]=(dp[n]-dp[n]%10)/10;
			i++;
		}
		cout<<ans;
	}
	return 0;
}