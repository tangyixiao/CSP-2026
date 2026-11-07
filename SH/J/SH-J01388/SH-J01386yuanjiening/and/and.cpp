#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,ans,sum;
    sum=0;
    long long a[200001];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		ans=a[i]&a[i+1];
		if(sum<ans) sum=ans;
	}
	cout<<sum;
    return 0;
}
