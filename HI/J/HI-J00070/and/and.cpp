#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end(),greater<int>());
	int res=a[0];
	if(m==1)
	{
		cout<<res;
		return 0;
	}
	for(int i=1;i<m;i++) res=(res&a[i]);
	cout<<res;
	return 0;
}
