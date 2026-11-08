#include<bits/stdc++.h>
using namespace std;
int HW(string s)
{
	long long z=s.size();
	int cnt=0;
	for(int i=0;i<z/2;i++)
	{
		if(s[i]!=s[z-i-1])
		{
		
		return 1;
		}
		else
		{
			cnt++;	
		}
	
	}			return cnt;return 0;
};

int main()
{
	freopen("string,in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		char y;
		cin>>y;
		for(int j=1;j<=x;j++)
		{
			s+=y;
		}
	}
		//long long z=s.size();
		if(!HW(s))
		cout<<HW(s);
		else
		cout<<0;
	//for(int i=0;i<z/2;i++)
     return 0;
}

