#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0,cnt,s;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int y=1;y<=m;y++){
				cnt=(a[i]&a[j]);
			}
			sum=max(sum,cnt);
		}
	}
	cout<<sum;
	
	return 0;
 } 