#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char c[200010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r]){
			ans+=min(a[l],a[r]);
		}
		if(a[l]>=a[r]){
			a[l]-=a[r];
			a[r]=0;
			r--;
		}else{
			a[r]-=a[l];
			a[l]=0;
			l++;
		}
	}
	cout<<ans;
	return 0;
} 
