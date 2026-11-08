#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main()
{
	freopen("and.in","r", stdin);
	freopen("and.out","w", stdout);
	long long n,m,r,l,sum=1,tmp;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			tmp=a[i]&a[j];
			sum=max(sum,tmp);
		}
	}
	cout<<sum;
	return 0;
}
