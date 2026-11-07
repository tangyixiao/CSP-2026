#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct node{
	string s;
	int x;
}a[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].x>>a[i].s;
	}
	int l=1;
	int r=n;
	int ans=0;
	while(l<r){
		if(a[l].s!=a[r].s){
			if(a[l].x>a[r].x){
				ans+=a[r].x;
				a[l].x-=a[r].x;
				a[r].x-=a[r].x;
				--r;
			}else if(a[l].x<a[r].x){
				ans+=a[l].x;
				a[r].x-=a[l].x;
				a[l].x-=a[l].x;
				++l;
			}else{
				ans+=a[l].x;
				++l;
				--r;
			}
		}else{
			if(a[l].x>a[r].x){
				a[l].x-=a[r].x;
				a[r].x-=a[r].x;
				--r;
			}else if(a[l].x<a[r].x){
				a[r].x-=a[l].x;
				a[l].x-=a[l].x;
				++l;
			}else{
				++l;
				--r;
			}
		}
	}
	cout<<ans;
	return 0;
}
