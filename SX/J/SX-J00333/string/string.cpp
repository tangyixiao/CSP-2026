#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 1e6+5;
ll n,m,sum=0,sum1=0;
string s,s1;
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>m>>s1;
    	for(int j=1;j<=m;j++) s+=s1;
    	sum+=m;
	}
	if(sum%2!=0)
	{
		string s2=s.substr(0,(sum-1)/2);
		string s3=s.substr(sum/2,1);
		string s4;
		s4=s4+s2+s3+s2;
		for(int i=0;i<sum;i++)
		{
			if(s4[i]!=s[i]) sum1++;
		}
		cout<<sum1;
	}
	else
	{
		string s2=s.substr(0,sum/2);
		string s4;
		s4=s4+s2+s2;
		for(int i=0;i<sum;i++)
		{
			if(s4[i]!=s[i]) sum1++;
		}
        cout<<sum1;
	}
	return 0;
}
