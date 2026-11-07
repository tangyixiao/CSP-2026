#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans,kk,l,r;
char b[200005],p[200000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			p[j+kk]=b[i];
		}
		kk+=a[i];
	}
	for(int i=1;i<=kk/2;i++){
		l=i,r=kk-i+1;
		if(p[l]!=p[r]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}