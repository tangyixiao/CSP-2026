#include <bits/stdc++.h>
using namespace std;
int a[200020],b[200020];
bool P(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,P);
	int P;
	for (int i=1;i<m;i++) P=(a[i]&a[i+1]);
	cout<<P;
	return 0;
}
