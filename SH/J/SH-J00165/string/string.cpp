#include<bits/stdc++.h>
using namespace std;
int n,a[100005],len;
char c[100005],c2[1000000005];
int main(){
	freopen("string.in",stdin,r);
	freopen("string.out",stdout,w);
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		k+=a[i];
		for(int j=1;j<=a[i];j++) c2[k+j]=c[i];
	}
	int ans=len/2;
	for(int i=1;i<=len/2;i++){
		if(c2[i]==c2[len-i+1]) ans--;
	}
	cout<<ans;
	return 0;
}
