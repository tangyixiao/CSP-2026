#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int n,m;
int a[N];
int ans;
int cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	ans=a[0]&a[1];
	for(int i=2;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}