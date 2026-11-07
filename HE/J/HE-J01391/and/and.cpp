#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int n,m;
long long maxx,a[MAXN];
bool cmp(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	maxx=a[1];
	for(long long i=2;i<=m;i++) maxx&=a[i];
	cout<<maxx<<'\n';
	return 0;
}
