#include<bits/stdc++.h>
using namespace std;
int n,l,cnt;
string z,a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> l;
		cin >> z;
		for(int i=0;i<l;i++)
			a+=z;
	}
	int len = a.size();
	for(int i=0;i<len/2+1;i++)
	{
		if(a[i]!=a[len-i-1])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
