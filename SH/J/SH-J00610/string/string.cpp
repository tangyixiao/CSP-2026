#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
typedef long long ll;
int n;
ll cnt,a[maxn][3],ans;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int u;
	for(int i = 1;i<=n;i++){
		cin>>u>>c;
		if(u == 0){
			continue;
		}
		cnt++;
		a[i][1] = u;
		int t = c[0] - 'a' + 1;
		a[i][2] = t;
	}
	int l,r;
	l = 1,r = cnt;
	while(l <= r){
		if(a[l][1] >= a[r][1]){
			a[l][1] -= a[r][1];
			if(a[l][2] != a[r][2]){
				ans += a[r][1];
			}
			r--;
		}
		else{
			a[r][1] -= a[l][1];
			if(a[l][2] != a[r][2]){
				ans += a[l][1];
			}	
			l++;
		}
		if(a[l][1] == 0) l++;
		if(a[r][1] == 0) r--;
	}
	cout<<ans<<"\n";
}
