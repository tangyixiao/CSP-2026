#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+6;
int ans,n,m=1,a[maxn];
char c[maxn];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r]){
			ans+=min(a[l],a[r]);
			int num=a[l];
			a[l]=max(1LL*0,a[l]-a[r]);
			if(num>a[r]) r--;
			else a[r]-=num,l++;
		}
		else{
			if(a[l]<a[r]) a[r]-=a[l],l++;
			else if(a[l]==a[r]) l++,r--;
			else a[l]-=a[r],r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}//双指针，预期得分100，开场90min 