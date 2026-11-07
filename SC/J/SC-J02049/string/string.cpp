#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for(int i=1;i<=n/2;i++)
		for(int j=n;j>=n/2+1;j--)
			if(b[i]!=b[j]){
				sum+=min(a[i],a[j]);
				a[i]-=min(a[i],a[j]);
				a[j]-=min(a[i],a[j]);
			}
	cout<<sum;		
	return 0;
} 