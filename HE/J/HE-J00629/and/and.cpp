#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i+=1){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	cout<<a[n];
	return 0;
}
