#include<bits/stdc++.h>
using namespace std;
int n,a;
string b,c;
int f(string a)
{
	int cnt=0;
	string p1=a;
	int p=0;
	string k,l;
	if(a.size()%2==0)
	{
		k=a.substr(0,a.size()/2);
		l=a.substr(a.size()/2+1,a.size()/2);
		reverse(k.begin(),k.end()); 
		while(p=a.size()/2)
		{
			if(k[p]!=l[p]) cnt++;
			p++;
		}
	}
	else
	{
		k=a.substr(0,a.size()/2+1);
		l=a.substr(a.size()/2,a.size()/2+1);
		reverse(k.begin(),k.end());
		while(p+1==a.size()/2+1)
		{
			if(k[p]!=l[p]) cnt++;
			p++;
		}
	}
	return cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		for(int j=0;j<a;j++)
		{
			c+=b;
		}
	 } 
	 string t=c;
	 reverse(t.begin(),t.end());
	 if(t==c) 
	 {
	 	cout<<0;
	 	return 0;
	 }
	 cout<<f(c);
	 
	 
}
