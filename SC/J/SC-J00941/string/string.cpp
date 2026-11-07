#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,s=0;
	long long sum=0;
	long long a[200005];
	char c[200005];
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=1;i<n;i++){
		if(c[i]==c[i+1]){
			s++;
		}
	}
	if(s==n-1){
		cout<<0;
		return 0;
	}
	for(long long i=1;i<=n/2;i++){
		if(c[i]!=c[n]){
			sum+=min(a[i],a[n-i+1])+abs(a[i]-a[n-1+1]);
		}
	}
	cout<<sum;
	return 0;
}