#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n, m, a[N], f[N], maxn=-1, t[5];
bool flag1=1,flag2=1;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4)flag1=0;
		if(a[i]!=i-1)flag2=0;
	}
	if(flag1){
		for(int i=1;i<=n;i++)t[a[i]]++;
		if(t[4]>=m){
			cout<<4;
			return 0;
		}
		if(t[3]>=m){
			cout<<3;
			return 0;
		}
		if(t[3]+t[2]>=m){
			cout<<2;
			return 0;
		}
		if(t[3]+t[1]>=m){
			cout<<1;
			return 0;
		}
		cout<<0;
		return 0;
	}
	f[0]=2147483647;
	for(int i=1;i<=n;i++)
		for(int j=m;j>=1;j--)
			f[j]=max(f[j],f[j-1]&a[i]);
	cout<<f[m];
	return 0;
}
