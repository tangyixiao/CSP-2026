#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,k;
    cin>>n>>k;
    long long a[200005];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n-k+1];
	return 0;
 } 
