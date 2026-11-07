#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int n,m;
struct node{
	int num;
	char c;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
//	cout<<s<<'\n';
	int l = 1,r = n;
	int ans = 0;
	while(l<r){
		if(a[l].num<a[r].num){
			ans+=(a[l].c!=a[r].c)*a[l].num;
			a[r].num -= a[l].num;
			l++;
		}else if(a[l].num>a[r].num){
			ans+=(a[l].c!=a[r].c)*a[r].num;
			a[l].num -= a[r].num;
			r--;
		}else{
			ans+=(a[l].c!=a[r].c)*a[l].num;
			l++;
			r--;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
