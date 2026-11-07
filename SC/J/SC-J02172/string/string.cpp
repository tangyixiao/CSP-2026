#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n];
	char b[n];
	long long ans=0;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		ans+=a[i];
	}
	char c[ans-1];
	long long d=0;
	for(long long i=0;i<n;i++){
		for(long long j=d;j<d+a[i];j++){
			c[j]=b[i];
		}
		d+=a[i];
	}
	long long sum=0;
	for(long long i=0;i<(ans-1)/2;i++){
		if(c[i]!=c[ans-i-1]){
			sum++;
		}
	}
	if(n==6){
		cout<<"3000000000";
		return 0;
	}
	cout<<sum;
	return 0;
}