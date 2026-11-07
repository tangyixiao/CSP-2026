#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
string s;
bool cmp(int x,int y){
	return x > y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int num=a[1];
	for(int i=2;i<=m;i++){
		num&=a[i];
	} 
	cout<<num;
	return 0;
}