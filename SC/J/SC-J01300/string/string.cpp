#include<bits/stdc++.h>
using namespace std;
long long a[100010];
char c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int r=n,l=1;
	long long ans=0,cnt=0;
	while(l<r){
		if(c[l]==c[r]){
			long long ca=min(a[l],a[r]);
			a[l]-=ca;
			a[r]-=ca;
			if(a[l]==0)l++;
			if(a[r]==0)r--;
		}else{
			long long ca=min(a[l],a[r]);
			ans+=ca;
			a[l]-=ca;
			a[r]-=ca;
			if(a[l]==0)l++;
			if(a[r]==0)r--;
		}
	}
	cout<<ans;
	return 0;
}