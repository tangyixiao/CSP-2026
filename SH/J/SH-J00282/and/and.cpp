#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int a[MAXN];
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ans=a[n-m];
	cout<<ans<<endl; 
	return 0;
} 
