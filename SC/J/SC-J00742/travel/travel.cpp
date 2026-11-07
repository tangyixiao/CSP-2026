#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char w1,w2;
int a,b;
int f(char ch)
{
	if(ch=='A'||ch=='B'||ch=='C') return 1;
	else if(ch=='D'||ch=='F') return 0;
}
int cal(char ch)
{
	if(ch=='A') return 1;
	if(ch=='B') return 2;
	if(ch=='C') return 3;
	if(ch=='D') return 5;
	if(ch=='F') return 6;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>a>>w1>>s2>>b>>w2;
	if(s1==s2)
	{
		cout<<1;
		if(a==b)
		{
			cout<<1;
			if(f(w1)==f(w2))
			{
				cout<<1;
				if(abs(cal(w1)-cal(w2))==1)
				{
					cout<<1;
					return 0;
				}
				else
				{
					cout<<0;
					return 0;
				}
			}
			else
			{
				cout<<"00";
				return 0;
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else cout<<"0000";
	return 0;
}