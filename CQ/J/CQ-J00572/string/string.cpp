#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    
    string a,b;
    ll n,x,sum=0;
    cin >> n;
    for (int i=0;i<n;++i)
    {
    	cin >> x >> a;
    	for (int j=0;j<x;j++)
    	{
    		b+=a;
    		sum++;
		}
	}
	ll l=0,r=sum-1,t=0;
	while (l < r)
	{
		if (b[l] != b[r])
		{
			t++;
		}
		++l;
		--r;
	}
	cout << t;
	return 0;
}

