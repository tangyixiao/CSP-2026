#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
	long long n,a[N],t,xb,sum[N],ans;
	string s;
	char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	sum[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum[i]=sum[i-1]+a[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r])ans+=min(a[l],a[r]);
		if(a[l]==a[r]){l++;r--;}
		else if(a[l]>a[r]){a[l]-=a[r];r--;}
		else {a[r]-=a[l];l++;}
	}
	cout<<ans;
	return 0;
}

