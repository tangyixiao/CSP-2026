#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=4e5+50;
int n,ans,s;
struct node{
	int st,en;
	char ch;
}x[N];
stack<int> s2,s1,t1,t2;
stack<int> s3,t3;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	int f;
	x[0].en=0;
	for(int i=1;i<=n;i++)
	{
		cin>>f>>x[i].ch;
		x[i].st=x[i-1].en+1;
		x[i].en=x[i].st+f-1;;
	}	
	for(int i=n;i>=1;i--)
	{
		s1.push(x[i].st);
		s2.push(x[i].en);
		s3.push(x[i].ch-'a');
	}
	int s=x[n].en;
	for(int i=1;i<=n;i++)
	{
		t1.push(s-x[i].en+1);
		t2.push(s-x[i].st+1);
		t3.push(x[i].ch-'a');
	}
	while(!s1.empty()&&!t2.empty())
	{
		int a,b,x,y;
		int c,z;
		a=s1.top();
		b=s2.top();
		c=s3.top();
		x=t1.top();
		y=t2.top();
		z=t3.top();
		s1.pop();
		s2.pop();
		s3.pop();
		t1.pop();
		t2.pop();
		t3.pop();
		//cout<<a<<' '<<b<<' '<<c<<' '<<x<<' '<<y<<' '<<z<<'\n';
		if(b>y)
		{
			if(c!=z)
			{
				//cout<<"A";
				ans+=(y-x+1);
				s1.push(y+1);
				s2.push(b);
				s3.push(c);
			}
		}
		else if(b<y)
		{
			if(c!=z)
			{
				//cout<<"B";
				ans+=b-a+1;
				t1.push(b+1);
				t2.push(y);
				t3.push(z);
			}
		}
		else
		{
			if(c!=z)
			{
				//cout<<"C";
				ans+=y-x+1;
			}
		}
	}
	cout<<ans/2;
	return 0;
}