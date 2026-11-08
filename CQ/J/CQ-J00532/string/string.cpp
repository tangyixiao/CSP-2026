#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long n,maxn=0,ans=0,k=0,m,ny=0;
long long a[N];
string s,y,z,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		if(a[i]>maxn) maxn=a[i];
		k+=a[i];
	}
	if(k%2==0) m=k/2;
	else m=(k+1)/2;
	if(maxn>m) cout<<k-maxn;
	else cout<<k-maxn-(m-maxn);
	return 0;
} 
