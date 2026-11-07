#include<bits/stdc++.h>
using namespace std;
unsigned short a[200010], n, m, ans;
int main(){
	freopen("and.in", "r", stdin);  
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	sort(a+1, a+n+1, greater<int>());
	ans=a[1];
	for(int i = 2;i<=m;i++)
		ans=ans&a[i];
	cout<<ans;
	return 0;
} //ดํมห 
