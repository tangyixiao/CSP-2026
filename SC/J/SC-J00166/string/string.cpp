#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
constexpr int N=2e5+5;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int l=0,r=0;char nl='0',nr='0';
	int ans=0;
	for(int i=1,j=n;i<=n||j>=1;){
		if(l<=r){
			nl=c[i];
			ans+=(nl!=nr)*min(r-l,a[i]);
			l+=a[i];
			i++;
		}
		else {
			nr=c[j];
			ans+=(nl!=nr)*min(l-r,a[j]);
			r+=a[j];
			j--;
		}
	}
	cout<<ans/2;
}