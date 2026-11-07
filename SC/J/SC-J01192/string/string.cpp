#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n;
long long len;
long long a[N],b[N];
char c[N],d[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		a[i]+=a[i-1];
	}
	for(int i=n;i>=1;i--){
		b[n-i+1]=len-a[i-1];
		b[n-i+1]+=b[n-i+2];
		d[n-i+1]=c[i];
	}
	long long i=1,j=1;
	long long pre=1,nxt=min(a[1],b[1]);
	long long ans=0;
	while(i<=n&&j<=n){
		if(c[i]!=d[j])
			ans+=(nxt-pre+1);
		pre=min(a[i],b[j])+1;
		if(a[i]<b[j])
			i++;
		else if(a[i]>b[j])
			j++;
		else
			i++,j++;
		nxt=min(a[i],b[j]);
	}
	cout<<ans/2ll;
	return 0;
}