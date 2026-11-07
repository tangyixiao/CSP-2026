#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int m,n;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a[10005];
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m,greater<int>());
	cout<<a[1];
	return 0;
}
