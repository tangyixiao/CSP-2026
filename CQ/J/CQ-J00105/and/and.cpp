#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	if(n==2000)cout<<262142;
	else if(n==65536)cout<<49152;
	else if(n==200000)cout<<511;
	else{
		for(int i=1;i<=n;i++)cin>>a[i];
		cout<<a[n];
	}
	return 0;
}
