#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;

char b[N];
long long a[N],n;
long long ans=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		a[i]=x;
		b[i]=y;
	}
	int l=1,r=n;
	while(l<r){
		long long le=min(a[l],a[r]);
		if(b[l]!=b[r])ans+=le;
		a[l]-=le;
		a[r]-=le;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
	return 0;
} 