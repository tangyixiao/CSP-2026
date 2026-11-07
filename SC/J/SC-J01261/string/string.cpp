#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
struct stu
{
	int num;
	string q;
}a[100100];
stu b[100100];
bool cmp(stu x,stu y)
{
	if(x.num!=y.num)
	{
		return x.num>y.num;
	}
	return x.q<y.q;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    if(n == 1)
    {
    	cout<<0;
    	return 0;
	}
	if(n == 2)
	{
		int q1,w1;
		string e1,r1;
		cin>>q1>>e1>>w1>>r1;
		if(e1 == r1)
		{
			cout<<0; 
		}
		else
		{
			cout<<min(q1,w1);
		}
		return 0;
	}
	int cur = 0;
	for(int i =1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].q;
		bool flag = false;
		for(int j =1;j<=cur;j++)
		{
			if(b[j].q == a[i].q)
			{
				b[j].num+=a[i].num;
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			b[++cur].q = a[i].q;
			b[cur].num = a[i].num; 
		}
	}
	sort(b+1,b+cur+1,cmp);
	if(cur == 1)
	{
		cout<<0;
	}
	else
	{
		int sum = 0;
		for(int i = 2;i<=cur;i++)
		{
			sum += b[i].num;
		}
		cout<<sum;
	}
	return 0;
}