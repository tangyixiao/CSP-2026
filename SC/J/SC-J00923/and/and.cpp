#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,s=0;
    cin>>n>>m;
    int i=1,j=n;
    for(int k=1;k<=n;k++) cin>>a[k];
    for(int i=1;i<=n;i++) 
	{
		if(a[i]>s) s=a[i];
	}
	if(m==1)cout<<s;
	if(m==2)cout<<s;
	return 0;
}