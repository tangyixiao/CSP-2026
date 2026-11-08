#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a<b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector<long long> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<a[n-1];
	return 0;
} 
