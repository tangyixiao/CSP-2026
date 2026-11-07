#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N=2e5+100;
char c[N];
int a[N];
int ans=0; 
int l,r;
signed main(){ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1,r=n;
	while(l<=r){
		if(c[l]==c[r]){
			if(a[l]==a[r]) l++,r--;
			else if(a[l]<a[r]){a[r]-=a[l];l++;}
			else if(a[l]>a[r]){a[l]-=a[r];r--;}
		}else{
			int p=min(a[l],a[r]);
			ans+=p;
			if(a[l]==a[r]) l++,r--;
			else if(a[l]<a[r]){a[r]-=a[l];l++;}
			else if(a[l]>a[r]){a[l]-=a[r];r--;}
		}
	} 
	cout<<ans;
	return 0;
}

