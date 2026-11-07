#include<bits/stdc++.h>//2
using namespace std;
typedef long long ll;

const int N=4*1e5+16;

int n;

struct node{
	ll len;
	char c;
}a[N];

ll ans;

int l,r;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].len>>a[i].c;
	}
	
	l=1,r=n;
	while(l<r)
	{
		if(a[l].len>=a[r].len)
		{
			a[l].len-=a[r].len;
			if(a[l].c!=a[r].c) ans+=a[r].len;
			--r;
			if(a[l].len==0) ++l;
		}
		else
		{
			a[r].len-=a[l].len;
			if(a[l].c!=a[r].c) ans+=a[l].len;
			++l;
		}
	}
	
	cout<<ans;

	return 0;
}
/*
long long

3
2 a
2 b
1 c


2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

10
1 a
1 a
1 c
1 d
1 e
1 e
1 c
1 d
1 a
1 c

5
1 a
1 c
2 b
1 d
2 e

*/