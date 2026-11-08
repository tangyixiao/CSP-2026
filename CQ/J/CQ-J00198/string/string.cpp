#include<bits/stdc++.h>
using namespace std;

const long long N=1e5*2+5;
long long n,cnt,a[N],sl;
char c[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(long long i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		sl+=a[i];
	}
	for(long long i=1,j=n;i<=n&&j>0&&i<j;){
		long long mn=(a[i]<a[j]?a[i]:a[j]);
		if(c[i]!=c[j]) cnt+=mn;
		a[i]-=mn,a[j]-=mn;
		if(!(a[i]))++i;
		if(!(a[j]))--j;
	}
	cout<<cnt;
	return 0;
}
