#include<bits/stdc++.h>//string
using namespace std;
const long long N=1e5+100;
long long a,b,e,f,g,h;
char c;
long long ans1;
struct node1
{
	long long x1,x2;
	char z;
}d[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//ios::sync_with_atdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a;
	for(long long i=1;i<=a;i++)
	{
		cin>>b>>c;
		d[i].x1=d[i-1].x2+1;
		d[i].x2=d[i-1].x2+b;
		d[i].z=c;
	}
	/*
	for(long long i=1;i<=a;i++)
	{
		cout<<d[i].x1<<" "<<d[i].x2<<" "<<d[i].z<<"\n";
	}
	*/
	long long l=1,ll=1;
	long long r=d[a].x2,rr=a;
	while(l<=r)
	{
		long long xx1=d[ll].x1;
		long long xx2=d[ll].x2;
		long long xx3=xx2-l+1;
		long long yy1=d[rr].x1;
		long long yy2=d[rr].x2;
		long long yy3=r-yy1+1;
		/*
		cout<<"AAA\n";
		cout<<"l "<<l<<"\n";
		cout<<"xx1 "<<xx1<<"\n";
		cout<<"xx2 "<<xx2<<"\n";
		cout<<"xx3 "<<xx3<<"\n";
		cout<<"r "<<r<<"\n";
		cout<<"yy1 "<<yy1<<"\n";
		cout<<"yy2 "<<yy2<<"\n";
		cout<<"yy3 "<<yy3<<"\n";
		*/
		if(ll==rr)
		{
			break;
		}
		if(xx3<yy3)
		{
			if(d[ll].z!=d[rr].z)
			{
				ans1+=xx3;
			}
			ll++;
			l=d[ll].x1;
			r=r-xx3;
		}
		else
		{
			if(xx3>yy3)
			{
				if(d[ll].z!=d[rr].z)
				{
					ans1+=yy3;
				}
				rr--;
				r=d[rr].x2;
				l+=yy3;
			}
			else
			{
				if(d[ll].z!=d[rr].z)
				{
					ans1+=xx3;
				}
				ll++;
				l=d[ll].x1;
				rr--;
				r=d[rr].x2;
			}
		}
	}
	cout<<ans1;

	return 0;
}
