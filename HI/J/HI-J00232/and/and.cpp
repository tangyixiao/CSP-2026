#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
int a[200005];
int main(){
	freopen("and.in",'r',stdin);
	freopen("and.out",'w',stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	reverse(a,a+n);
	ans+=a[0];
	for(int i=1;i<m;i++){
		ans=a[i]&ans;
	}
	cout<<ans;
	return 0;
}
