#include <bits/stdc++.h>
using namespace std;
stack <long long> v;
int a[500005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	int x;
    	cin>>x;
    	a[x]++;
		if(a[x])
		v.pop(x);
    	v.push(x);
    	
	}
    return 0;
}
