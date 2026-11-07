#include <bits/stdc++.h>
using namespace std;
string to2(int ten)
{
	string temp="",r="";
	while(true) 
	{
		temp+=ten%2+'0';
		ten/=2;
		if(ten==0) break;
	}
	for(int i=temp.length()-1;i>=0;i--)
	{
		r+=temp.at(i);
	}
	return r;
}
int toten(string two){
	int r=0,ping=1;
	for(int i=two.length()-1;i>=0;i--)
	{
		if(two[i]=='1') r+=ping;
		ping*=2;
	}
	return r;
}
string toand(string a,string b)
{
	string r="";
	int al=a.length(),bl=b.length();
	if(al>bl)
	{
		for(int i=0;i<al-bl;i++) b="0"+b;
	}
	else if(al<bl)
	{
		for(int i=0;i<bl-al;i++) a="0"+a;
	}
	for(int i=0;i<a.length();i++)
	{
		if(a.at(i)+b.at(i)=='1'+'1') r+="1";
		else r+="0";
	}
	return r;
}
int newand(int a,int b)
{
	return toten(toand(to2(a),to2(b)));
}
int main()
{
	long long int n,m,big=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> list(n);
	for(int i=0;i<n;i++)
	{
		cin>>list[i];
	}
	if(m==1)
	{
		cout<<0;
		return 0;
	}
	if(n==m)
	{
		int r=newand(list[0],list[1]);
		for(int i=2;i<n;i++)
		{
			r=newand(r,list[i]);
		}
		cout<<r;
		return 0;
	}
	if(m==2)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if (j+m-1<n);
				{
					int temp=newand(list[j],list[j+1]);
					for(int k=j+2;k<j+m;k++)
					{
						temp=newand(temp,list[k]);
					}
					if(temp>big)
					{
						big=temp;
					}
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n-1;i++)
		{
			if (i+m-1<n);
			{
				int temp=newand(list[i],list[i+1]);
				for(int k=i+2;k<i+m;k++)
				{
					temp=newand(temp,list[k]);
				}
				if(temp>big)
				{
					big=temp;
				}
			}
		}
	}
	cout<<big;
}