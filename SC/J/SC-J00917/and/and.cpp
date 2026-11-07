#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxx = -0x3f3f3f3f;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+n+1);
	int ans=a[n];
	int i=0;
	while(m!=0){
		ans &= a[n-i];
		i++;
		m--;		
	}
	cout<<ans;
	return 0;
}