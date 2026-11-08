 #include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200001];
int main()
{
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<a[n];
	return 0;
}

