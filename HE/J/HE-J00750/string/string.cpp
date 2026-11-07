#include<bits/stdc++.h>
using namespace std;
char a;
string s;
long long cnt,sum;
int main()
{
	freopen("string.in ","r",stdin);
	freopen("string.out ","w",stdout);
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>x>>a;
	    for (int j=1;j<=x;j++)
	    {
	    	s[i*j]+=a;
		}
	}
	int len=s.size();
	for (int i=1;i<=len/2;i++)
	{
	    if(s[i]!=s[len-i+1])
		{
			sum++;
		}	
    }
	cout<<sum;
	return 0;
}
