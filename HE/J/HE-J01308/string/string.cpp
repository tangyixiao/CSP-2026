#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 2e5+10;
int n;
ll a[MAX],ans = 0;
char b[MAX];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int l = 1,r = n;
	while(l<r){
		if(a[l] == 0){
			l++;
		}
		if(a[r] == 0){
			r--;
		}
		if(b[l] != b[r]){
			ll min_l = min(a[l],a[r]);
			ans += min_l;
			a[l]-=min_l;
			a[r]-=min_l;
		}
		else{
			ll
			 min_l = min(a[l],a[r]);
			a[l]-=min_l;
			a[r]-=min_l;
		}
	}
	cout<<ans<<endl;
	return 0;
}
