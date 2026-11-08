#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<string>
using namespace std;
#define int long long

struct str
{
	int num;
	char c;
}a[114514];

int n,p,q,ans;

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cin>>a[i].num>>a[i].c;
	}
	p = 0,q = n-1;
	while(p<q)
	{
//		cout<<p<<" "<<q<<endl;
//		cout<<a[p].c<<":"<<a[p].num<<"	"<<a[q].c<<":"<<a[q].num<<endl;
		int mi = min(a[p].num,a[q].num);
		if(a[p].c!=a[q].c)
		{
			ans+=mi;
		}
		a[p].num-=mi;
		a[q].num-=mi;
		if(a[p].num == 0)p++;
		if(a[q].num == 0)q--;
	}
	cout<<ans<<endl;
}
/*
3
2 a
2 b
1 c

6
10000000 a
10000000 a
10000000 a
10000000 b
10000000 b
10000000 b
*/

