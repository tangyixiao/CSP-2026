#include<bits/stdc++.h>
using namespace std;
long long n,f[200005],ans,l=1,r;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f[i]>>c[i];
	}
	r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(f[l]>f[r]){
				f[l]-=f[r];
				r--;
			}
			else if(f[l]<f[r]){
				f[r]-=f[l];
				l++;
			}
			else{
				l++;
				r--;
			}
		}
		else{
			ans+=min(f[l],f[r]);
			if(f[l]>f[r]){
				f[l]-=f[r];
				r--;
			}
			else if(f[l]<f[r]){
				f[r]-=f[l];
				l++;
			}
			else{
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}  