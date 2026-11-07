#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
struct s
{
	int c;
	string a;
} f[200005];
long long n,r=0,l;
long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	l=n-1;
	for(int i=0;i<n;i++)
	{
		cin >> f[i].c >> f[i].a;
	}
	while(r!=l)
	{
		if(f[r].c>=f[l].c)
		{
			if(f[r].a!=f[l].a)
				ans+=f[l].c ;
			f[r].c -= f[l].c;
			l--;
		}
		if(f[r].c<f[l].c)
		{
			if(f[r].a!=f[l].a)
				ans+=f[r].c ;
			f[l].c -= f[r].c;
			r++;
		}
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
