#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
int n,m;
const int N=2e5+10;
int a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    int ans=a[n];
    for(int i=n-1;i>n-m;i--){
    	ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
