#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++)cin>>a[i]>>c[i];
	int l=0,r=n-1;
	unsigned int ans=0;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]==a[r])l++,r--;
			else if(a[l]>a[r])a[l]-=a[r],r--;
			else if(a[l]<a[r])a[r]-=a[l],l++;
			continue;
		}
		if(a[l]==a[r])ans+=a[l],l++,r--;
		else if(a[l]>a[r])a[l]-=a[r],ans+=a[r],r--;
		else if(a[l]<a[r])a[r]-=a[l],ans+=a[l],l++;
	}cout<<ans;
	return 0;
}
