#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b,c,d=pow(2,20)-1,f=0,h,k=0,l=0,m=0,n=0,o=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>b>>c;
	for(long long e=1;e<=b;e++)
	{
		cin>>a[e];
		for(long long g=1;g<=20;g++)
		{
			if(a[e]+1==pow(2,g))
			{
				k++;
				break;
			}
			if(pow(2,g)>=a[e]+1)
			{
				break;
			}
		}
		h=max(h,a[e]);
		if(a[e]==1)
		{
			l++;
		}
		if(a[e]==2)
		{
			m++;
		}
		if(a[e]==3)
		{
			n++;
		}
		if(a[e]==4)
		{
			o++;
		}
	}
	sort(a+1,a+b+1);
	if(c==1)
	{
		for(long long e=1;e<=b;e++)
		{
			f=max(f,d&a[e]);
		}
		cout<<f;
		return 0;
	}
	else if(c==2)
	{
		for(long long e=1;e<=b;e++)
		{
			for(long long g=e+1;g<=b;g++)
			{
				f=max(f,d&a[e]&a[g]);
			}
		}
		cout<<f;
	}
	else if(k==b)
	{
		cout<<a[b-c+1];
	}
	else if(h<=4)
	{
		if(o>=c)
		{
			cout<<"4";
			return 0;
		}
		else if(n>=c)
		{
			cout<<"3";
			return 0;
		}
		else if(m>=c)
		{
			cout<<"2";
			return 0;
		}
		else if(l>=c)
		{
			cout<<"1";
			return 0;
		}
		else if(n+m>=c)
		{
			cout<<"2";
			return 0;
		}
		else if(m+l>=c)
		{
			cout<<"1";
			return 0;
		}
		else
		{
			cout<<"0";
			return 0;
		}
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
