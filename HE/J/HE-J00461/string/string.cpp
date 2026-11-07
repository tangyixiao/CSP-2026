#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll n,k,ans;
ll l,r,x,y,ii,jj;
struct Node{
	ll c,sum;
	string s;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].c >> a[i].s;
		a[i].sum = a[i-1].sum + a[i].c;
	}
	k = (a[n].sum+1) /2;
	l = k,r = k;
	if( a[n].sum % 2 == 0 )  r ++;
	for(int i=1;i<=n;i++){
		if( a[i].sum == k ){
			ii = i;
			jj = i+1;
			break;
		}
		if( a[i].sum > k ){
			ii = i;
			jj = i;
			break;
		}
	}
	if( l == r )  jj = ii;
	a[n+1].sum = a[n].sum + 1;
	//cout << l << r << endl;
	while( l > 0 && r <= a[n].sum ){
		x = l - a[ii-1].sum;
		y = a[jj+1].sum - r;
	//	y = a[jj].sum - r + 1;
	//	cout << l << " " << r << " " << x << " " << y << " " << ii << " " << jj << endl;
		if( y <= 0 )  y = a[jj+1].sum - r;
	//	cout << l << " " << r << " " << x << " " << y << " " << ii << " " << jj << endl;
		if( a[ii].s != a[jj].s ){ 
			ans += min(x,y);
			
		}
		l = l - min(x,y);
		r = r + min(x,y);
		while( l <= a[ii-1].sum )  ii--;
		while( r >= a[jj+1].sum )  jj++;
	}
	cout << ans << endl;
	return 0;
} 
