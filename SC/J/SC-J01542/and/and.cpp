#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],k,a2[30]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a2[i]-1){
			f=0;
		}
	}
	sort(a+1,a+1+n);
	if(f){
		cout<<a[n-m+1];
		return 0;
	}
	if(m==1){
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		k=a[1];
		for(int i=1;i<=n;i++){
			k&=a[i];
		}
		cout<<k;
		return 0;
	}
	int ans=a[n];
	for(int i=n-1;i>n-m;i--){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}