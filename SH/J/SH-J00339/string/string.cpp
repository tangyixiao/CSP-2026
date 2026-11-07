#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
struct jgt
{
	ll a;
	char c;
};
ll n,l;
deque<jgt> dq;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		jgt p;
		cin>>p.a>>p.c;
		dq.push_back(p);
		l+=p.a;
	}
	ll cnt=0;
	while(dq.size()>1)
	{
		jgt f=dq.front(),b=dq.back();
		dq.pop_front();
		dq.pop_back();
		if(f.c==b.c) continue;
		if(f.a>b.a)
		{
			f.a-=b.a;
			cnt+=b.a;
			dq.push_front(f);
		}
		else
		{
			b.a-=f.a;
			cnt+=f.a;
			if(b.a) dq.push_back(b);
		}
	}
	cout<<cnt<<endl;
	return 0;
}
