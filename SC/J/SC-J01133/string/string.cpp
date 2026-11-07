#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,l,r,ans;
struct node{
	int x;
	char ch;
}a[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].ch;
	l=1,r=n;
	while(l<r){
		if(a[l].x<a[r].x){
			if(a[l].ch!=a[r].ch) ans+=a[l].x;
			a[r].x-=a[l].x;
			l++;
			continue;
		}else if(a[l].x>a[r].x){
			if(a[l].ch!=a[r].ch) ans+=a[r].x;
			a[l].x-=a[r].x;
			r--;
			continue;
		}else{
			if(a[l].ch!=a[r].ch) ans+=a[r].x;
			r--;l++;
		}
	}
	cout<<ans;
	return 0;
}