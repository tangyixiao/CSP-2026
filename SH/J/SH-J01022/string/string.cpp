#include <bits/stdc++.h>

using namespace std;

int n;
int l,r;
long long ans=0;
long long a[200005]={};
string c[200005]={};
long long x;

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1,r=n;
	for(int i=1;i<=n;i++){

		x=min(a[l],a[r]);
		if(c[l]!=c[r])ans+=x;
		a[l]-=x;
		a[r]-=x;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
		if(l>n||r<1)break;
	}
	cout<<ans;
	return 0;
}
