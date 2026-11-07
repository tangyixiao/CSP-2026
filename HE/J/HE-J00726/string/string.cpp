#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;char c[N];
long long m=0,a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	long long k=0,ans=0;
	for (int i=1,j=n;i<j&&k<m/2;i++){
		if (k+a[i]>m/2) a[i]=m/2-k;
		k+=a[i];
		while (i<j&&a[j]<a[i]){
			if (c[j]!=c[i]) ans+=a[j];
			a[i]-=a[j];--j;
		}
		if (a[j]>=a[i]){
			if (c[j]!=c[i]) ans+=a[i];
			a[j]-=a[i];
			if (a[j]==0) --j;
		}
	}
	cout<<ans<<'\n';
	return 0;
}

/*
做好事不留名。 
*/
