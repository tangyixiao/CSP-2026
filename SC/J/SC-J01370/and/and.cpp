#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],pre[N];

int main(){ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=-1;
	cin>>n>>m;
	bool spec_A=1,spec_B=1;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]!=i-1){
			spec_B=0;
		}
		int x=a[i]+1;
		int l=log2(x);
		if (pow(2,l)!=x){
			spec_A=0; 
		}
		if (i==1){
			pre[i]=a[i];
		}else{
			pre[i]=pre[i-1]&a[i];
		}
		mx=max(mx,a[i]);
	}
	int ln=log2(n);
	if (pow(2,ln)==n&&spec_B){
		int ans=a[n-m+1];
		for (int i=n-m+2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	if (n==m){
		cout<<pre[n];
		return 0;
	}
	if (m==1){
		cout<<mx;
		return 0;
	}
	if (spec_A){
		sort(a+1,a+1+n,greater<int>());
		cout<<a[m];
		return 0;
	}
	if (m==2){
		int ans2=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				ans2=max(ans2,a[i]&a[j]);
			}
		}
		cout<<ans2;
	}
	return 0;
}
