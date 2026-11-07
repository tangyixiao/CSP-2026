#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,num[214514],ans = 0;
char a[214514];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i = 1;i <= n;i++) cin>>num[i]>>a[i];
	ll l = 1,r = n;
	while(l < r){
		if(a[l] != a[r]) ans+=min(num[l],num[r]);
		if(num[l] < num[r]){
			num[r]-=num[l];
			l++;
		}
		else if(num[r] < num[l]){
			num[l]-=num[r];
			r--;
		}
		else l++,r--;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
