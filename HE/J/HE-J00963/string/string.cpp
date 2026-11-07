#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
  freopen("string.in","r",stdin);
  freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
	
    	int a;
		char c;
    	cin>>a>>c;
    	for(int j=1;j<=a;j++)
    	{
    		s+=c;
		}
	}
	string z;
	for(int i=s.size()-1;i>=0;i--)
	{
		z+=s[i] ;}
	int cnt=0;
	string x;
	if(s==z) cout<<0;
	else{
		if(s.size()%2==1)
		{
			
			for(int i=s.size()-1;i>=s.size()/2+1;i++)
			{
				x+=s[i];
			}
			for(int i=0;i<=s.size()/2-1;i++)
			{
				if(x[i]!=s[i]) cnt++;
			}
			cout<<cnt;
		}
		else
		{
		
			for(int i=s.size()-1;i>=s.size()/2-1;i++)
			{
				x+=s[i];
			}
			for(int i=0;i<=s.size()/2-1;i++)
			{
				if(x[i]!=s[i]) cnt++;
			}
			cout<<cnt;
		}
	}
    return 0;
}
