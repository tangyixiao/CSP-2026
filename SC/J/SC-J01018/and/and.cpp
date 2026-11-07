#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=(1e5+5)*2;
int a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	if(n%2!=0) cout<<a[n/2+1];
	else cout<<a[n/2];
}