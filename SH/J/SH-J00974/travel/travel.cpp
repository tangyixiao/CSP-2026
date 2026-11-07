#include <bits/stdc++.h>
using namespace std;

bool is_s(string a,string b)
{
	char k=a[a.size()-1];
	char y=b[b.size()-1];
	
	const string gd1="DF";
	const string gd2="ABC";
	
	if (gd1.find(k)!=string::npos&&gd1.find(y)!=string::npos)
	{
		return 1;
	}
	return (gd2.find(k)!=string::npos&&gd2.find(y)!=string::npos);
	
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	
	cout<<(a==c);
	if (a!=c)
	{
		cout<<"000";
		return 0;
	}
	
	cout<<(b[1]==d[1]);
	
	if (b[1]!=d[1])
	{
		cout<<"00";
		return 0;
	}
	
	cout<<is_s(b,d);
	
	if (!is_s(b,d))
	{
		cout<<"0";
		return 0;
	}
	
	const string ref=" ABC DF ";
	
	int pos=ref.find(b[b.size()-1]);
	
	if (ref[pos+1]==d[d.size()-1])
	{
		cout<<1;
	}
	else
	{
		cout<<(ref[pos-1]==d[d.size()-1]);
	}
	
	return 0;
}
