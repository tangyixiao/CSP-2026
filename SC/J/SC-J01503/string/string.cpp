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
	while(n>1){
		if(c[l]==c[r]){
			a[l]-=min(a[l],a[r]);
			a[r]-=min(a[l],a[r]);
			
		}else{
			ans+=min(a[l],a[r]);
			a[l]-=min(a[l],a[r]);
			a[r]-=min(a[l],a[r]);
		}
		if(a[l]==0){
			l++;
			n--;
		}else if(a[r]==0){
			r--;
			n--;
		}
	}
	cout<<ans;
	return 0;
}