#include<bits/stdc++.h>
using namespace std;
const int MAXN=200002;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[MAXN],sum=0,sum1=0;
	char b[MAXN];
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	sum1=sum/2;
	if(b[1]==b[n]) {
		cout<<0<<'\n';
		return 0;
	}
	cout<<sum1<<'\n';
	return 0;
} 
