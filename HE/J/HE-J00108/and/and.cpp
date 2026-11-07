#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
bool cmp(int x,int y){
	return x>y;
}
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int now=a[1];
	for(int i=2;i<=m;i++){
		now=now & a[i];
	}
	sort(a+1,a+n+1);
	int now1=a[1];
	for(int i=2;i<=m;i++){
		now1=now1&a[i];
	}
	cout<<max(now,now1);
	return 0;
}
