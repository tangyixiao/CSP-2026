#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200050];
char c[200005];
int ans,s1,s2;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];s1+=a[i];
	}
	//aaabbcc aaabaaa
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]<=a[r]){
				a[r]-=a[l];
//				s2+=a[l];
				l++;
			}else{
				a[l]-=a[r];
				r--;
			}
		}else{
			ans+=min(a[l],a[r]);
			if(a[l]<=a[r]){
//				s2+=a[l];
				a[r]-=a[l];l++;
			}else{
				a[l]-=a[r];r--;
			}
		}
	}cout<<ans;
	
	return 0;
}
