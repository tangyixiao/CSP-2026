#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
bool cmp(int a,int b){
	return a>b;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	cout << a[1] << " " <<a[2];
	int h=a[1];
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(h%a[i]!=0 && a[i]%h!=0){
			cnt++;
			h&=a[i];
		}
		if(cnt==m)break;
	}
	cout << h;
	return 0;
}
